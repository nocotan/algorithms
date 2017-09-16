use std::io;

fn main() {
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    if s.contains("9") {
        println!("Yes");
    } else {
        println!("No");
    }
}
