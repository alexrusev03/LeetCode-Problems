public class Solution {
    public int CharacterReplacement(string s, int k) {
        int j=0;
        int m=0;
        int res=0;
        Dictionary<char, int> map = new Dictionary<char, int>();
        for(int i=0;i<s.Length;i++){
            if (!map.ContainsKey(s[i])){
                map.Add(s[i], 1);
            }
            else{
                map[s[i]]++;
            }
            m=Math.Max(m,map[s[i]]);
            if(i-j+1-m>k){
                map[s[j]]--;
                j++;
            }
            res=Math.Max(res, i-j+1);
        }
        return res;
    }
}
