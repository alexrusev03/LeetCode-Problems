public class Solution {
    public int MinDeletions(string s) {
        int[] arr = new int[26];
        foreach(char c in s.ToCharArray()){
            arr[c - 'a']++;
        }
        int res = 0;
        Array.Sort(arr);
        for(int i = 24; i >= 0; i--){
            if(arr[i] == 0){
                break;
            }
            if(arr[i] >= arr[i+1]){
                int temp = arr[i];
                arr[i] = Math.Max(0, arr[i+1] -1);
                res += temp - arr[i];
            }
        }
        return res;
    }
}
