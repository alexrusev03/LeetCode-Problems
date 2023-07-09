class Solution {
    public int[] fairCandySwap(int[] aliceSizes, int[] bobSizes) {
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();
        int[] res = new int[2];
        int totalA=0, totalB=0;
        for(int i: bobSizes){
            totalB+=i;
            mp.put(i,1);
        }
        for(int j: aliceSizes){
            totalA+=j;
        }
        for(int k: aliceSizes){
            if(mp.get((totalB-totalA)/2+k)!=null){
                res[0]=k;
                res[1]=(totalB-totalA)/2+k;
                return res;
            }
        }
        return res;
    }
}
