public class Solution {
    public int[] FairCandySwap(int[] aliceSizes, int[] bobSizes) {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        int[] res = new int[2];
        int totalA=0, totalB=0;
        foreach(int i in bobSizes){
            totalB+=i;
            dict[i]=1;
        }
        foreach(int j in aliceSizes){
            totalA+=j;
        }
        foreach(int k in aliceSizes){
            if(dict.ContainsKey((totalB-totalA)/2+k)){
                res[0]=k;
                res[1]=(totalB-totalA)/2+k;
                return res;
            }
        }
        return res;
    }
}
