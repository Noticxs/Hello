use whoami;

fn main() {
    let username = whoami::username().unwrap_or_else(|_| "<unknown>".to_string());
    println!("Hello, {}!", username);
}
