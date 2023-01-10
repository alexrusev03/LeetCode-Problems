class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        while(i<n){
            if (s[i]==' '){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
            i++;
        }
        reverse(s.begin()+j,s.end());
        return s;
    }
};
