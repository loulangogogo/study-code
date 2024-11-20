import { describe, it, expect } from 'vitest';

it("1", () => {
  let a: object = {
    b: 2
  }

  console.debug(a.b);
});

it("2", () => {
  let a: {
    b: number
  } = {
    b: 2
  }

  console.debug(a.b);
});

it("3", () => {
  let a:{
    b: number,
    c?: string
  }

  a = {
    b : 2
  }

  a= {
    b : 2,
    c : "3"
  }
});

it("4", () => {
    let a:{
        readonly b: number,
        c: string,
        [key: string]: number|string,
    }

    a = {
        b : 2,
        c : "3",
        d : 4,
        e : "5"
    }

    a.b = 23;
    a.d = 34;
});