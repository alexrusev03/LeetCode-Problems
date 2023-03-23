class Solution {
    public int characterReplacement(String s, int k) {
        int j=0;
        int m=0;
        int res=0;
        HashMap<Character,Integer> map=new HashMap<>();
        for(int i=0;i<s.length();i++){
            map.put(s.charAt(i),map.getOrDefault(s.charAt(i),0)+1);
            m=Math.max(m,map.get(s.charAt(i)));
            if(i-j+1-m>k){
                map.put(s.charAt(j),map.get(s.charAt(j))-1);
                j++;
            }
            res=Math.max(res, i-j+1);
        }
        return res;
    }
}
