public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        Array.Sort(strs);
        int n=strs.Length;
        string str1=strs[0];
        string str2=strs[n-1];
        string res="";
        for(int i=0;i<str1.Length;i++){
            if(str1[i]==str2[i]){
                res+=str1[i];
            }
            else{
                break;
            }
        }
        return res;
    }
}
