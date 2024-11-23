package io.github.loulangogogo.aspect;

import org.apache.rocketmq.spring.annotation.RocketMQMessageListener;
import org.apache.rocketmq.spring.core.RocketMQListener;
import org.springframework.stereotype.Component;

@Component
@RocketMQMessageListener(topic = "TestTopic", consumerGroup = "YourConsumerGroup",selectorExpression = "test")
public class Consumer implements RocketMQListener<String> {

    @Override
    public void onMessage(String message) {
        // 处理消息的逻辑
        System.out.println("Received message: " + message);
    }
}