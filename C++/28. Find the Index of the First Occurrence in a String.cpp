class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size();
        int n=needle.size();
        for(int i=0;i<m-n+1;i++){
            int j=0;
            while(j<n && haystack[i+j]==needle[j]){
                j++;
            }
            if(j==n){
                return i;
            }
        }
        return -1;
    }
};
