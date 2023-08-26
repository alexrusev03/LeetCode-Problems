public class Solution {
    public int MinSteps(string s, string t) {
        int[] arr1 = new int[26];
        int[] arr2 = new int[26];
        foreach(char i in s){
            arr1[i-'a']++;
        }
        foreach(char i in t){
            arr2[i-'a']++;
        }
        int res = 0;
        for(int i=0; i<26; i++){
            res+=Math.Abs(arr1[i]-arr2[i]);
        }
        return res/2;
    }
}
