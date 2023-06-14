class Solution {
    public char findTheDifference(String s, String t) {
        int n = t.length();
        int m = s.length();
        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        Arrays.sort(sArr);
        Arrays.sort(tArr);
        int i = 0;
        while(i<m){
            if(sArr[i]!=tArr[i]){
                return tArr[i];
            }
            i++;
        }
        return tArr[n-1];
    }
}
