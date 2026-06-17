class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        s_hash, t_hash = {}, {}

        for char in list(s):
            if char in s_hash:
                s_hash[char] += 1
            else:
                s_hash[char] = 1

        for char in list(t):
            if char in t_hash:
                t_hash[char] += 1
            else:
                t_hash[char] = 1

        for key, value in s_hash.items():
            if key in t_hash and t_hash[key] == value:
                continue
            else:
                return False
        
        return True
        