import { describe, it, expect } from 'vitest';

type Age = number;
type User1 = {
    name: string;
    age: Age;
}

it('1', () => {
    let a:User1 = {
        name: '1',
        age: 1
    };
    console.debug(a);

})

type Sex = 1|2;

type User2 = {
    name: string;
    sex: Sex;
}

type User3 = User2 & User1;
type User4 = User2 | User1;

it('2', () => {
    let a:User3 = {
        name: '1',
  
        sex: 1
    };



    let b:User4 = {
        name: '1',
        age: 1,
        sex: 1
    };
    let b1:User4 = {
        name: '1',
        sex: 1
    };
    let b2:User4 = {
        name: '1',
        age: 1
    };
    let b3:User4 = {
        name: '1'
    };

    console.debug(a);
    console.debug(b);
})