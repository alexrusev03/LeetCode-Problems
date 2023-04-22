class Solution:
    def longestValidParentheses(self, s: str) -> int:
        n=len(s)
        res=0
        l=-1
        stk=[-1]
        for i in range(n):
            if s[i] == '(':
                stk.append(i)
            else:
                if not stk:
                    l = i
                else:
                    stk.pop()
                    if not stk:
                        stk.append(i)
                    else:
                        res=max(res,i-stk[-1])
        return res
