package io.github.loulangogogo.aspect;

import org.apache.rocketmq.client.producer.SendResult;
import org.apache.rocketmq.spring.core.RocketMQTemplate;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.core.task.AsyncTaskExecutor;
import org.springframework.messaging.Message;
import org.springframework.messaging.support.MessageBuilder;

import javax.annotation.PostConstruct;

//@SpringBootTest
@SpringBootApplication
public class RocketmqTest {

    @Autowired
    private RocketMQTemplate rocketmqTemplate;

    @Autowired
    private AsyncTaskExecutor taskExecutor;

    public static void main(String[] args) {
        SpringApplication.run(RocketmqTest.class, args);
    }

    @PostConstruct
    public void test() throws InterruptedException {
        taskExecutor.execute(()->{
            while (true) {
                // 用 setHeader 设置tag 标签 可能不会生效
                // 用 topic:tag 方式可以
                Message<String> msg = MessageBuilder.withPayload("Hello,RocketMQ")
                        //.setHeader(MessageConst.PROPERTY_TAGS, "自定义tag")
                        .build();
                rocketmqTemplate.send("TestTopic:test", msg);
                System.out.println("发送消息成功");
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    throw new RuntimeException(e);
                }
            }
        });
    }
}
