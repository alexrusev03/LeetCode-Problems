public class Solution {
    public IList<int> FindSubstring(string s, string[] words) {
        var d = new Dictionary<string, int>();
        var res = new List<int>();
        int m=words.Length;
        int n=words[0].Length;
        for(int i = 0; i<m; i++){
            if (!d.ContainsKey(words[i])){
                d[words[i]] = 0;
            }
            d[words[i]]++;
        }
        for(int i=0;i<s.Length-m*n+1;i++){
            var dict = new Dictionary<string, int>(d);
            int check=1;
            for(int j = 0; j<m; j++){
                String t=s.Substring(i+j*n,n);
                if(!dict.ContainsKey(t) || dict[t] == 0){
                    check=0;
                    break;
                }
                dict[t]--;
            }
            if(check==1){
                res.Add(i);
            }
        }
        return res;
    }
}
