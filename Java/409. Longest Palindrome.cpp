class Solution {
    public int longestPalindrome(String s) {
        int n = s.length();
        int count = 0;
        Map<Character, Integer> mp = new HashMap<>();
        for(char i: s.toCharArray()){
            mp.put(i, mp.getOrDefault(i, 0) + 1);
            if(mp.get(i)%2==0){
                count=count+mp.get(i);
                mp.put(i,0);
            }
        }
        for(char i: s.toCharArray()){
            if(mp.get(i)%2==1){
                count+=mp.get(i);
                break;
            }
        }
        return count;
    }
}
