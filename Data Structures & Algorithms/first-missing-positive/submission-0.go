func firstMissingPositive(nums []int) int {
	smallest := 1
	hash := map[int]bool{}
	for _, num := range nums {
		if _, ok := hash[num]; ok {
			continue
		} else {
			hash[num] = true
		}
	}

	found := false
	for !found {
		if _, ok := hash[smallest]; ok {
			smallest++
			continue
		} else {
			break
		}
	}

	return smallest
}
