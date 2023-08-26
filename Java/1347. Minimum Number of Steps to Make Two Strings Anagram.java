class Solution {
    public int minSteps(String s, String t) {
        int[] arr1 = new int[26];
        int[] arr2 = new int[26];
        for(char i: s.toCharArray()){
            arr1[i-'a']++;
        }
        for(char i: t.toCharArray()){
            arr2[i-'a']++;
        }
        int res = 0;
        for(int i=0; i<26; i++){
            res+=Math.abs(arr1[i]-arr2[i]);
        }
        return res/2;
    }
}
