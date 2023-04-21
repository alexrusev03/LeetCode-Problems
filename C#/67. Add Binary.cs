public class Solution {
    public string AddBinary(string a, string b) {
        var res = new StringBuilder();
        int c = 0;
        int i = a.Length - 1;
        int j = b.Length - 1;
        while (i >= 0 || j >= 0 || c==1) {
            if (i >= 0){
                c += a[i--] - '0';
            }
            if (j >= 0){
                c += b[j--]- '0';
            }
            res.Append(c % 2);
            c /= 2;
        }
        return new string(res.ToString().Reverse().ToArray());
    }
}
