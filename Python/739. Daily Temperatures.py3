class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        vec = [0]*n
        st = []
        for i in range(n):
            while len(st) > 0:
                if temperatures[i] > temperatures[st[-1]]:
                    vec[st[-1]] = i - st[-1]
                    st.pop()
                else:
                    break
            st.append(i)
        return vec
