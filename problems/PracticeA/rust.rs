use std::io;

fn main() {
    /* 一つの整数が標準入力に与えられる。数値型で格納する。 */
    let mut a = String::new();
    io::stdin().read_line(&mut a).unwrap();
    let a: i32 = a.trim().parse().unwrap();
    /* スペース区切りで2つの整数が標準入力に与えられるので、空白で分割して2つの変数に数値型で格納する。 */
    let mut b_c = String::new();
    io::stdin().read_line(&mut b_c).unwrap();
    let mut b_c = b_c.split_whitespace();
    let b: i32 = b_c.next().unwrap().parse().unwrap();
    let c: i32 = b_c.next().unwrap().parse().unwrap();
    /* 文字列が標準入力に与えられる。 */
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    /* 結果を出力する。 */
    println!("{} {}", a + b + c, s.trim());
}

/* 短いバージョン */
/*
fn main() {
    let mut a = String::new();
    io::stdin().read_line(&mut a).unwrap();
    let mut b_c = String::new();
    io::stdin().read_line(&mut b_c).unwrap();
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    println!("{} {}", a.trim().parse::<i32>().unwrap() + b_c.split_whitespace().next().unwrap().parse::<i32>().unwrap() + b_c.split_whitespace().next().unwrap().parse::<i32>().unwrap(), s.trim());
}
*/
