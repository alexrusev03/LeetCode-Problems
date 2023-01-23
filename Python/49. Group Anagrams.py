class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        n = len(strs)
        mp=defaultdict(list)
        s=""

        for str in strs:
           sorted_str = s.join(sorted(str))
           mp[sorted_str].append(str)
        
        return sorted(mp.values())
