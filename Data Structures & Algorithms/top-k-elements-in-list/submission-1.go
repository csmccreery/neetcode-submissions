func topKFrequent(nums []int, k int) []int {
	ans := []int{}
	numMap := map[int]int{}

	for _, num := range nums {
		if _, ok := numMap[num]; ok {
			numMap[num]++
		} else {
			numMap[num] = 1
		}
	}

	for len(ans) < k {
		currentMostFreq := 0
		currentMostFreqAmount := 0
		
		for key, value := range numMap {
			if value > currentMostFreqAmount {
				currentMostFreq = key
				currentMostFreqAmount = value
			}
		}

		ans = append(ans, currentMostFreq)
		delete(numMap, currentMostFreq)
	}

	return ans
}
