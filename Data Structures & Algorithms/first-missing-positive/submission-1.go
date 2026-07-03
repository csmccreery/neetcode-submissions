func firstMissingPositive(nums []int) int {
	n := len(nums)
	i := 0


	for i < n {
		// If the value at i is less than 0 or > n, skip
		if nums[i] <= 0 || nums[i] > n {
			i++
			continue
		}

		index := nums[i] - 1
		// if nums[i] and nums[index] don't match. swap them, otherwise continue
		if nums[i] != nums[index] {
			nums[i], nums[index] = nums[index], nums[i]
		} else {
			i++
		}
	}

	for i := 0; i < n; i++ {
		if nums[i] != i+1 {
			return i+1
		}
	}

	return n+1
}
