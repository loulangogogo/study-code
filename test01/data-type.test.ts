import { describe, it, expect } from 'vitest';

const a = (x: number): number | null => {
    if (x < 10) {
        return x;
    }

    return null;
}

const b = (): undefined => {
    return undefined;
}

const c = (): void => {
    let ax = 2 + 2;
    let bx = ax + ax;
    console.debug(bx);
}

const d = (): never => {
    throw TypeError("I aways error");
}

const e = (): never => {
    while (true) {
        console.log("I always run");
    }
}

enum Color{
    red = '1',
    green = 10,
    blue = 20
}

const enum Color2{
    red = 1,
    green = 10,
    blue = 20
}

describe('data type', () => {
    it('null', () => {
        // 可以读取值
        console.debug(Color.blue);
        // 也可以读取键
        console.debug(Color[20]);
        console.debug(Color['1']);

    })

    it('undefined', () => {
        console.debug(Color2.red);
        // 不允许反响进行操作，const修饰的枚举值
        console.debug(Color2[1]);
    })
})
