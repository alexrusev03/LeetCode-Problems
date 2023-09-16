class Solution {
    public int[] findOriginalArray(int[] changed) {
        int n = changed.length;
        int[] res = new int[n/2];
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();
        if(n % 2 == 1){
            return new int[0];
        }
        Arrays.sort(changed);
        int t = 0;
        for(int i: changed){
            mp.put(i, mp.getOrDefault(i,0)+1);
        }
        for(int j: changed){
            if(mp.get(j) <= 0){
                continue;
            }
            if(mp.getOrDefault(2*j, 0) <= 0){
                return new int[0];
            }
            res[t] = j;
            t++;
            mp.put(j, mp.get(j)-1);
            mp.put(2*j, mp.get(2*j)-1);
        }
        return res;
    }
}
