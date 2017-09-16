use std::io;
fn main() {
    let n: i32 = get_line().parse().unwrap();
    let mut res = 0;
    for _ in 0..n {
        let ac: Vec<i32> = get_line().split(' ').map(|x| x.trim().parse().unwrap()).collect();
        res += ac[1] - ac[0] + 1;
    }
    println!("{}", res);
}

fn get_line() -> String {
    let mut line = String::new();
    io::stdin().read_line(&mut line).unwrap();
    return String::from(line.trim())
}
