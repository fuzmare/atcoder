// -*- coding:utf-8-unix -*-
use std::io::prelude::*;
fn main() {
    let mut input = String::new();
    std::io::stdin().read_to_string(&mut input).unwrap();
    let mut tokens = input.split_ascii_whitespace();
    let a = tokens.next().unwrap().parse::<u32>().unwrap();
    let b = tokens.next().unwrap().parse::<u32>().unwrap();
    let c = tokens.next().unwrap().parse::<u32>().unwrap();
    let s = tokens.next().unwrap();
    println!("{} {}", a + b + c, s);
}

