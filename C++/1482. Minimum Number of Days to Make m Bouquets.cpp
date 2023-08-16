class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(m * 1ll * k * 1ll>n){
            return -1;
        }
        int l = 1;
        int r = 1e9;
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
};
