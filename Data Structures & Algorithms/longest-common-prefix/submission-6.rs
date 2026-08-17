impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        if strs.is_empty() {
            return String::new();
        }

        let mut prefix_len = strs[0].chars().count();

        for pair in strs.windows(2) {
            let common = pair[0]
                .chars()
                .zip(pair[1].chars())
                .take_while(|(a, b)| a == b)
                .count();
            prefix_len = prefix_len.min(common);
        }

        strs[0].chars().take(prefix_len).collect()
    }
}
