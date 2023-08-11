class Solution {
    public boolean canReach(int[] arr, int start) {
        int[] check = new int[arr.length];
        return helper(start, arr.length, arr, check);
    }
    public boolean helper(int idx, int n, int[] arr, int[] check) {
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
}
