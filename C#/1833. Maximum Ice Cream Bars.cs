public class Solution {
    public int MaxIceCream(int[] costs, int coins) {
        int res = 0;
        Array.Sort(costs);
        foreach(int i in costs){
            if(i>coins){
                break;
            }
            coins -= i;
            res++;
        }
        return res;
    }
}
