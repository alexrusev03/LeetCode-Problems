public class Solution {
    public int RomanToInt(string s) {
        int res=0;
        int n = s.Length;
        var map = new Dictionary<char, int>();
        map.Add('I',1);
        map.Add('V',5);
        map.Add('X',10);
        map.Add('L',50);
        map.Add('C',100);
        map.Add('D',500);
        map.Add('M',1000);
        for(int i=0;i<n;i++){
            if(i<n-1 && map[s[i]]<map[s[i+1]]){
                res-=map[s[i]];
            }
            else{
                res+=map[s[i]];
            }
        }
        return res;
    }
}
