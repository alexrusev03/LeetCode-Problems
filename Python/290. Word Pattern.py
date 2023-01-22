class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        s=s+' '
        n = len(s)
        m = len(pattern)
        str=""
        vec=[]
        for i in range(0,n):
            if s[i]!=' ':
                str+=s[i]
            else:
                vec.append(str)
                str=""
        wordCount=len(vec)
        if m!=wordCount:
            return False
        for k in range(0,m-1):
            for l in range(k+1,m):
                if pattern[k]==pattern[l]:
                    if vec[k]==vec[l]:
                        continue
                    else:
                        return False
                elif pattern[k]!=pattern[l]:
                    if vec[k]!=vec[l]:
                        continue
                    else:
                        return False
                else:
                    return False
        return True
