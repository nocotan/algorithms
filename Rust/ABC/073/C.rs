use std::io;
use std::collections::HashSet;

fn main() {
    let mut values = HashSet::new();
    let n: i32 = get_line().parse().unwrap();
    for _ in 0..n {
        let a: i32 = get_line().parse().unwrap();
        if !values.contains(&a) {
            values.insert(a);
        } else {
            values.remove(&a);
        }
    }
    println!("{}", values.len());
    fn get_line() -> String {
        let mut line = String::new();
        io::stdin().read_line(&mut line).unwrap();
        return String::from(line.trim())
    }
}
