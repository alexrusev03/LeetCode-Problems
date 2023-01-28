class MinStack:

    def __init__(self):
        self.st=[]
        self.minnum=[]

    def push(self, val: int) -> None:
        self.st.append(val)
        self.minnum.append(val if not self.minnum else min(self.minnum[-1],val))

    def pop(self) -> None:
        self.st.pop(-1)
        self.minnum.pop(-1)
    def top(self) -> int:
        return self.st[-1]

    def getMin(self) -> int:
        return self.minnum[-1]


# Your Minself.stack object will be inself.stantiated and called as such:
# obj = Minself.stack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
