class Solution {
    public String frequencySort(String s) {
        String str="";
        Map<Character,Integer> mp=new TreeMap<>();
        List<Character> c=new ArrayList<>();
        for(int i=0;i<s.length();i++){
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
            c.add(s.charAt(i));
        }
        
        Collections.sort(c, (a, b) -> {
            int diff = mp.get(b) - mp.get(a);
            if(diff == 0) {
                return b - a;
            }   
            return diff;
        });
        
        
        for(int i=0;i<c.size();i++){
            str=str+c.get(i);
        }
        
        return str;
    }
}
