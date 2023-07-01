class Solution {
    public int distributeCandies(int[] candyType) {
        int n = candyType.length;
        HashMap<Integer, Integer> mp = new HashMap();
        int res = 0;
        for (int i: candyType) {
            if (!mp.containsKey(i)) {
                if (res == n/2) {
                    return n/2;
                }
                res++;
            }
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        return res;
    }
}
