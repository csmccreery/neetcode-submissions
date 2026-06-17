func twoSum(nums []int, target int) []int {
    compMap := map[int]int{}
    for i, num := range nums {
        if j, ok := compMap[target-num]; ok {
            return []int{j, i}
        }
        compMap[num] = i
    }
    return nil
}
