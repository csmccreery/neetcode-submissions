func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false
    }

    freqArr := [26]int{}
    for _, char := range s {
        index := char - 'a'
        freqArr[index]++
    }

    for _, char := range t {
        index := char - 'a'
        freqArr[index]--
    }

    for _, count := range freqArr {
        if count > 0 {
            return false
        }
    }

    return true
}
