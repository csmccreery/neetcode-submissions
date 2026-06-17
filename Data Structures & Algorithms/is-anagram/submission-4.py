class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        counts = [0] * 26
        base = ord('a')

        for ch_s, ch_t in zip(s, t):
            counts[ord(ch_s) - base] += 1
            counts[ord(ch_t) - base] -= 1

        return all(c == 0 for c in counts)
        