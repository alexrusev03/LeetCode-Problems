class Solution {
    public int countNicePairs(int[] nums) {
        HashMap<Integer, Integer> mp= new HashMap<>();
        int res = 0;
        for(int i : nums){
            if(mp.containsKey(i - reverse(i))){
                res = (res + mp.get(i - reverse(i))) % 1000000007;
            }
            mp.put(i - reverse(i),mp.getOrDefault(i - reverse(i),0)+1);
        }
        return res;
    }
    public int reverse(int i){
        long rev=0;
        while(i!=0){
            rev=rev*10 + i%10;
            i/=10;
        }
        return (int)rev;
    }
}
