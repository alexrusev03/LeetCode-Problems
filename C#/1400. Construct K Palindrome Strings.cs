public class Solution {
    public bool CanConstruct(string s, int k) {
        if(s.Length<k){
            return false;
        }
        int[] arr = new int[26];
        for(int i = 0; i<s.Length; i++){
            arr[s[i]-'a']++;
        }
        int res=0;
        for(int i = 0; i<26; i++){
            if(arr[i]%2==1){
                res++;
            }
        }
        return res<=k;
    }
}
