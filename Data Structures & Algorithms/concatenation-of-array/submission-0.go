func getConcatenation(nums []int) []int {
    n := len(nums)
    m := 2 * n

    newArr := []int{}

    for i := 0; i < m; i++ {
        index := i % n
        newArr = append(newArr, nums[index])
    }

    return newArr
}
