public class Solution {
    public int[][] IntervalIntersection(int[][] firstList, int[][] secondList) {
        List<int[]> ans = new List<int[]>();
        int n1=firstList.Length;
        int n2=secondList.Length;
        int j = 0;
        for (int i = 0; i<n1; i++){
            while(j<n2) {
                if (secondList[j][0]>firstList[i][1]){
                    break;
                }
                else if (secondList[j][1]<firstList[i][0]){
                    j++;
                }
                else {
                    ans.Add(new int[]{Math.Max(firstList[i][0], secondList[j][0]), Math.Min(firstList[i][1], secondList[j][1])});
                    if (firstList[i][1]>secondList[j][1]){
                        j++;
                    }
                    else{
                        break;
                    }
                } 
            }
        }
        return ans.ToArray();
    }
}
