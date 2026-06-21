func sortColors(nums []int) {
    colorCount := map[int]int{}

	for _, num := range nums {
		if _, ok := colorCount[num]; ok {
			colorCount[num]++
		} else {
			colorCount[num] = 1
		}
	} 

	ans := []int{}

	redCount := colorCount[0]
	whiteCount := colorCount[1]
	blueCount := colorCount[2]

	for i := 0; i < redCount; i++ {
		ans = append(ans, 0)
	}

	for i := 0; i < whiteCount; i++ {
		ans = append(ans, 1)
	}

	for i := 0; i < blueCount; i++ {
		ans = append(ans, 2)
	}

	for j := 0; j < len(nums); j++ {
		nums[j] = ans[j]
	}
}
