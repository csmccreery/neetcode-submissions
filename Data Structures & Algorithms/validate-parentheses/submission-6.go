func isValid(s string) bool {
    stack := []rune{}  
    parenMap := map[rune]rune{
        '}': '{',
        ')': '(',
        ']': '[',
    }

    for _, char := range s {
        if open, ok := parenMap[char]; ok {
            if len(stack) > 0 && stack[len(stack) - 1] == open {
                stack = stack[:len(stack) - 1]
            } else {
                return false
            }
        } else {
            stack = append(stack, char)
        }
    }

    return len(stack) == 0
}
