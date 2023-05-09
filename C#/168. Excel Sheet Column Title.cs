public class Solution {
    public string ConvertToTitle(int columnNumber) {
        string res="";    
        while(columnNumber>0) {
            columnNumber--;
            int  i = columnNumber%26;
            res = (char)(i+'A') + res;
            columnNumber/=26;
        }
        return res;
    }
}
