class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        open_map = {
            ']': '[',
            ')': '(',
            '}': '{',
        }
        for char in s:
            if char in open_map:
                if stack and stack[-1] == open_map[char]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(char)
        
        return len(stack) == 0
            