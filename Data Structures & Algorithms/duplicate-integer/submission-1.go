func hasDuplicate(nums []int) bool {
    containsMap := map[int]bool{}

    for _, n := range nums {
        _, ok := containsMap[n]
        if ok {
            return true
        }

        containsMap[n] = true
    }

    return false
}
