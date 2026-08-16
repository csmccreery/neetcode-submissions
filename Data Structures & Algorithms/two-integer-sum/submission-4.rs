impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let n: usize = nums.len();
        let mut compliments: HashMap<i32, usize> = HashMap::new();        

        for i in 0..n {
            let compliment: i32 = target - nums[i];

            match compliments.get(&compliment) {
                Some(&j) => { return vec![j as i32, i as i32] },
                None => { compliments.insert(nums[i], i); },
            }
        }

        return vec![-1, -1];
    }
}
