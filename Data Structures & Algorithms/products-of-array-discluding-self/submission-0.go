func productExceptSelf(nums []int) []int {
	prodPrefix := make([]int, len(nums))
	prodSuffix := make([]int, len(nums))

	prodPrefix[0] = nums[0]
	prodSuffix[len(nums) - 1] = nums[len(nums) - 1]

	for i := 1; i < len(nums); i++ {
		prodPrefix[i] = prodPrefix[i - 1] * nums[i]
	}

	for i := len(nums) - 2; i >= 0; i-- {
		prodSuffix[i] = prodSuffix[i + 1] * nums[i]
	}

	ans := make([]int, len(nums))
	defPrefix, defSuffix := 1, 1
	for j := 0; j < len(nums); j++ {
		if j == 0 {
			ans[j] = prodSuffix[j+1] * defPrefix
			continue
		} else if j == len(nums) - 1 {
			ans[j] = prodPrefix[j-1] * defSuffix
		} else {
			ans[j] = prodPrefix[j-1] * prodSuffix[j+1]
		}
	}
	return ans
}



