impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let n: usize = nums.len();
        let mut seen: HashMap<i32, usize> = HashMap::new();        

        for i in 0..n {
            let comp: i32 = target - nums[i];

            match seen.get(&comp) {
                Some(&j) => { return vec![j as i32, i as i32] },
                None => { seen.insert(nums[i], i); },
            }
        }

        return vec![-1, -1];
    }
}
