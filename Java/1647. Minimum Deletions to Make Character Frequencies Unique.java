class Solution {
    public int minDeletions(String s) {
        int[] arr = new int[26];
        for(char c: s.toCharArray()){
            arr[c - 'a']++;
        }
        int res = 0;
        Arrays.sort(arr);
        for(int i = 24; i >= 0; i--){
            if(arr[i] == 0){
                break;
            }
            if(arr[i] >= arr[i+1]){
                int temp = arr[i];
                arr[i] = Math.max(0, arr[i+1] -1);
                res += temp - arr[i];
            }
        }
        return res;
    }
}
