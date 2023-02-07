public class Solution {
    public string FrequencySort(string s) {
        var a = new (int num, char c)[75];

        foreach(var ch in s){
            var (num, c) = a[ch - '0'];
            num++;
            a[ch - '0'] = (num, ch);
        }
        
        Array.Sort(a, (f, s) => s.num - f.num);
        var result = new StringBuilder();
        
        foreach(var (num, c) in a){
            if(num == 0){
                break;
            }

            result.Append(c, num);
        }

        return result.ToString();
    }
}
