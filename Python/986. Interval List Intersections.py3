class Solution:
    def intervalIntersection(self, firstList: List[List[int]], secondList: List[List[int]]) -> List[List[int]]:
        ans=[]
        n1=len(firstList)
        n2=len(secondList)
        j = 0
        for i in range(0,n1):
            while j<n2:
                if secondList[j][0]>firstList[i][1]:
                    break
                
                elif secondList[j][1]<firstList[i][0]:
                    j+=1
                
                else:
                    ans.append([max(firstList[i][0], secondList[j][0]), min(firstList[i][1], secondList[j][1])]);
                    if firstList[i][1]>secondList[j][1]:
                        j+=1
                    
                    else:
                        break
                    
        return ans
