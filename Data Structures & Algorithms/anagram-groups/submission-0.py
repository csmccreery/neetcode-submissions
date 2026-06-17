class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        word_hash = {}
        for word in strs:
            sorted_word = "".join(sorted(list(word)))
            if sorted_word in word_hash:
                word_hash[sorted_word].append(word)
            else:
                word_hash[sorted_word] = [word]

        return [word_hash[word] for word in word_hash]
