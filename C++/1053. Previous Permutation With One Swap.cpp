class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size();
        int i = n-2;
        int j = n-1;
        while(i>=0 && arr[i+1]>=arr[i]){
            i--;
        }
        if(i==-1){
            return arr;
        }
        while((arr[j]>=arr[i] && j>i) || arr[j-1]==arr[j]){
            j--;
        }
        swap(arr[i], arr[j]);
        return arr;
    }
};
