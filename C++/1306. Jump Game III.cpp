class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<int> check(arr.size());
        return helper(start, arr.size(), arr, check);
    }
    bool helper(int idx, int n, vector<int> &arr, vector<int> &check) {
        check[idx] = 1;
        if(arr[idx]==0){
            return true;
        }
        if(idx + arr[idx] < n && check[idx + arr[idx]]==0){
            if(helper(idx + arr[idx], n, arr, check)==true){
                return true;
            }
        }
        if(idx - arr[idx] >= 0 && check[idx - arr[idx]]==0){
            if(helper(idx - arr[idx], n, arr, check)==true){
                return true;
            }
        }
        return false;
    }
};
