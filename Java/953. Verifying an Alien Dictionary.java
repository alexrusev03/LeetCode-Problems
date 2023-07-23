class Solution {
    public boolean isAlienSorted(String[] words, String order) {
        HashMap<Character,Integer> mp = new HashMap<Character,Integer>();
        for(int i=0; i<order.length(); i++){
            mp.put(order.charAt(i),i);
        }
        for(int i=0; i<words.length-1; i++){
            String s1 = words[i];
            String s2 = words[i+1];
            for(int j=0; j<s1.length(); j++){
                if(j == s2.length()){
                    return false;
                }
                if(s1.charAt(j) != s2.charAt(j)){
                    if(mp.get(s1.charAt(j)) > mp.get(s2.charAt(j))){
                        return false;
                    }
                    break;
                }
            }
        }
        return true;
    }
}
