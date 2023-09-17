public class Solution {
    public string RemoveOccurrences(string s, string part) {
        StringBuilder sb = new StringBuilder(s);
        int i = s.IndexOf(part);
        while(i != -1){
            sb.Remove(i,part.Length);
            i = sb.ToString().IndexOf(part);
        }
        return sb.ToString();
    }
}
