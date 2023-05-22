class Solution {
    public int compareVersion(String version1, String version2) {
        int n1 = version1.length();
        int n2 = version2.length();
        int i=0;
        int j=0;
        long v1=0;
        long v2=0;
        while(i<n1 || j<n2){
            while(i<n1 && version1.charAt(i)!='.'){
                v1 = v1*10 + version1.charAt(i)-'0';
                i++;
            }
            while(j<n2 && version2.charAt(j)!='.'){
                v2 = v2*10 + version2.charAt(j)-'0';
                j++;
            }
            if(v1<v2){
                return -1;
            }
            if(v1>v2){
                return 1;
            }
            i++;
            j++;
            v1=0;
            v2=0;
        }
        return 0;
    }
}
