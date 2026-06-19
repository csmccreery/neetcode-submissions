func majorityElement(nums []int) int {
    countMap := map[int]int{}

	for _, val := range nums {
		if _, ok := countMap[val]; ok {
			countMap[val]++
		} else {
			countMap[val] = 1
		}
	}

	majEm := 0
	majCount := 0
	for key, value := range countMap {
		if value > majCount {
			majEm = key
			majCount = value
		}
	}

	return majEm
}
