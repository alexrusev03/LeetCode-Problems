class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows==1){
            return s;
        }
        string ans="";
        for(int i=0;i<numRows;i++){
            int j=i;
            int k=2*(numRows-1-i);
            while(j<n){
                ans+=s[j];
                if(i>0 && i<numRows-1 && j+k<n){
                    ans+=s[j+k];
                }
                j+=2*(numRows-1);
            }
        }
        return ans;
    }
};
