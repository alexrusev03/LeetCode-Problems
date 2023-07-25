class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int r = arr.size();
        int res = 0;
        while(l < r){
            int m = (r + l) / 2;
            if(arr[m] < arr[m + 1]){
                l = m + 1;
                res = m + 1;
            }
            else if(arr[m] < arr[m - 1]){
                r = m - 1;
                res = m - 1;
            }
            else{
                return m;
            }
        }
        return res;
    }
};
