public class Solution {
    public IList<string> FindRepeatedDnaSequences(string s) {
        int n = s.Length;
        var sol = new List<string>();
        Dictionary<string,int> mp = new Dictionary<string, int>();
        string str;
        for(int i = 0; i+10<=n; i++){
            str = s.Substring(i,10);
            if (mp.ContainsKey(str)) {
                if (mp[str]==0) {
                    sol.Add(str);
                }
                mp[str]++;
            }
            else{
                mp.Add(str, 0);
            }
        }
        return sol;
    }
}
