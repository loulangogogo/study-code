import { describe, it, expect } from 'vitest';

let a = [1, 2, 3];
let b = ['a', 'b'];
let c: string[] = ['1', 'a', '3b'];
let d: (string | number)[] = [1, 2, 3, 4, 'a'];
let d1: Array<string | number> = [1, 2, 3, 4, 'a'];
let e: unknown[] = [2, 'a', 'b'];

const buildArray = () => {
    let temp = [];
    temp.push(1);
    temp.push('a');
    return temp;
}
it('should work with array types', () => {
    let myArray = buildArray();
    myArray.push(true);
});

let yz: [number, string, string, number, boolean] = [1, '2', '3', 4, true];

let yz1: [number, string?,number?] = [1,,3];
it('should work with tuple types', () => {
    console.debug(yz1[0]);
    console.debug(yz1[1]);
    console.debug(yz1[2]);
});

let yz2: [number, ...string[]] = [1, '2', '3'];
it.only('should work with rest tuple types', () => {
    console.debug(yz2[0]);
    console.debug(yz2[1]);
    console.debug(yz2[2]);
});

let zd1: readonly [number, string] = [1, '2'];
let zd2: ReadonlyArray<number> = [1, 2, 3];

it('should work with readonly array types', () => {
    console.debug(zd1[1]);
    console.debug(zd2[2]);
    zd1[1] = 3;
    zd2[2] = 3;
    
});