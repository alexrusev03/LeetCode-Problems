class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int c = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;
        while (i >= 0 || j >= 0 || c==1) {
            if (i >= 0){
                c += a[i--] - '0';
            }
            if (j >= 0){
                c += b[j--] - '0';
            }
            res += to_string(c % 2);
            c /= 2;
        }
        reverse(begin(res), end(res));
        return res;
    }
};
