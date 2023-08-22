class Solution {
    public int maxIceCream(int[] costs, int coins) {
        int res = 0;
        Arrays.sort(costs);
        for(int i: costs){
            if(i>coins){
                break;
            }
            coins -= i;
            res++;
        }
        return res;
    }
}
