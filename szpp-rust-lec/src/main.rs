use std::cmp;

fn main() {
    proconio::input! {
        mut a: i64,
        mut b: i64,
    }

    let mut ans = 0;

    if a >= 4 {
        a -= 4;
        ans += 4;
        if b >= 4 {
            b -= 4;
            ans -= 4;
        }
    }

    if a >= 2 {
        a -= 2;
        ans += 2;
        if b >= 2 {
            b -= 2;
            ans -= 2;
        }
    }

    if a >= 1 {
        a -= 1;
        ans += 1;
        if b >= 1 {
            b -= 1;
            ans -= 1;
        }
    }

    println!("{}", ans);
}

