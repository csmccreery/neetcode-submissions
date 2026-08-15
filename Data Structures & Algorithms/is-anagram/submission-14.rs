impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        if t.len() != s.len() {
            return false;
        }

        let mut counts: Vec<i32> = vec![0; 26];

        for b in s.bytes() {
            counts[(b - b'a') as usize] += 1;
        }

        for b in t.bytes() {
            counts[(b - b'a') as usize] -= 1;
        }

        for count in counts {
            if count != 0 {
                return false;
            }
        }

        return true;
    }
}
