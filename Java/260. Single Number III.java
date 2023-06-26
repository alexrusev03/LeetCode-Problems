class Solution {
    public int[] singleNumber(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap();
        int[] res = new int[2];
        for(int i: nums){
            if(mp.containsKey(i)){
                mp.put(i, mp.get(i)+1);
            }
            else{
                mp.put(i,1);
            }
        }
        int idx = 0;
        for(int i: nums){
            if(mp.get(i)==1){
                res[idx] = i;
                idx++;
            }
        }
        return res;
    }
}
