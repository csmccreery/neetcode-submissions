impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        if t.len() != s.len() {
            return false;
        }

        let mut counts: Vec<i32> = vec![0; 26];

        for (a, b) in s.bytes().zip(t.bytes()) {
            counts[(a - b'a') as usize] += 1;
            counts[(b - b'a') as usize] -= 1;
        }

        counts.iter().all(|&count| count == 0)
   }
}
