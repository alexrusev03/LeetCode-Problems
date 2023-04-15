class Solution {
    public int lengthOfLastWord(String s) {
        int count = 0;
        int n = s.length() - 1;
        while (n >= 0 && s.charAt(n) == ' ') {
            n--;
        }
        for (int j = n; j>=0;j--) {
            if(s.charAt(j)==' '){
                return count;
            }
            count++;
        }
        return count;
    }
}
