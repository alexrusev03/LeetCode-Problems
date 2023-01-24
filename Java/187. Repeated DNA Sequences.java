class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        Integer n = s.length();
        List<String> sol = new ArrayList<>();
        HashMap<String,Integer> mp = new HashMap<String,Integer>();
        String str="";
        for(int i = 0; i <= s.length() - 10; i++) {
            str = s.substring(i, i + 10);
            if(s.substring(i).contains(str)) {
                mp.put(str, mp.getOrDefault(str,0)+1);
            }
        }
        for(Map.Entry<String,Integer> entry : mp.entrySet()) {
            if(entry.getValue() > 1) {
                sol.add(entry.getKey());
            }
        }
        return sol;
    }
}
