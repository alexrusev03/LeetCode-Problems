public class Solution {
    public string GetHint(string secret, string guess) {
        int bulls=0;
        int all=0;
        int n = secret.Length;
        Dictionary <char,int> map = new Dictionary<char,int>();
        for(int i=0;i<n;i++){
            if(guess[i]==secret[i]){
                bulls++;
            }
            if(map.ContainsKey(guess[i])){
                map[guess[i]]++;
            }
            else{
                map[guess[i]]=1;
            }
        }
        for(int i=0;i<n;i++){
            if(map.ContainsKey(secret[i]) && map[secret[i]]>0){
                all++;
                map[secret[i]]--;
            }
        }      
        return $"{bulls}A{all-bulls}B";
    }
}
