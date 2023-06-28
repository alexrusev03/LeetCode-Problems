public class Solution {
    public bool RotateString(string s, string goal) {
        if (s.Length != goal.Length){
            return false;
        }
        for (int i = 0; i < s.Length; i++){
            if (s==goal){
                return true;
            }
            s = s.Substring(1) + s[0];
        }
        return false;
    }
}
