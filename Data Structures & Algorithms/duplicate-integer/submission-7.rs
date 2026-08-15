impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        let mut uniques: HashMap<i32, bool> = HashMap::new();
        let mut ans: bool = false;

        for num in nums.iter() {
            match uniques.get(num) {
                Some(i32) => { ans = true },
                None => { uniques.insert(*num, true); },
            }
        }

        ans
    }
}
