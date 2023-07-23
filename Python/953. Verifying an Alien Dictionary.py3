class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        dict = {}
        for i in range(len(order)):
            dict[order[i]] = i
        for i in range(len(words)-1):
            s1 = words[i]
            s2 = words[i+1]
            for j in range(len(s1)):
                if j == len(s2):
                    return False
                if s1[j] != s2[j]:
                    if dict[s1[j]] > dict[s2[j]]:
                        return False
                    break
        return True
