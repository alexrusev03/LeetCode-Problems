public class Solution {
    public int MinDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.Length;
        if((long)m*k>n){
            return -1;
        }
        int l = 1;
        int r = (int)1e9;
        while(l<r){
            int mid = (l + r)/2;
            int f = 0;
            int b = 0;
            for(int j = 0; j<n; j++){
                if(bloomDay[j]>mid){
                    f = 0;
                }
                if(bloomDay[j]<=mid){
                    f++;
                }
                if(f == k){
                    b++;
                    f = 0;
                }
            }
            if(b < m){
                l = mid + 1;
            }
            else{
                r = mid;
            }
        }
        return l;
    }
}
