class Solution {
    public int[][] intervalIntersection(int[][] firstList, int[][] secondList) {
        List<int[]> ans = new ArrayList<>();
        int n1=firstList.length;
        int n2=secondList.length;
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
                    ans.add(new int[]{Math.max(firstList[i][0], secondList[j][0]), Math.min(firstList[i][1], secondList[j][1])});
                    if (firstList[i][1]>secondList[j][1]){
                        j++;
                    }
                    else{
                        break;
                    }
                } 
            }
        }
        return ans.toArray(new int[ans.size()][2]);
    }
}
