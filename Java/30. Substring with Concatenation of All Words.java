class Solution {
    public List<Integer> findSubstring(String s, String[] words) {
        HashMap<String, Integer> mp = new HashMap<>();
        List<Integer> res = new ArrayList<>();
        int m=words.length;
        int n=words[0].length();
        for(int i = 0; i<m; i++){
            mp.put(words[i],mp.getOrDefault(words[i],0)+1);
        }
        for(int i=0;i<s.length()-m*n+1;i++){
            HashMap<String, Integer> map = new HashMap<>();
            int check=1;
            for(int j = 0; j<m; j++){
                String t=s.substring(i+j*n,i+(j+1)*n);
                map.put(t,map.getOrDefault(t,0)+1);
                if(!mp.containsKey(t)){
                    check=0;
                    break;
                }
                if(map.get(t)>mp.get(t)){                    
                    check = 0;
                    break;
                }
            }
            if(check==1){
                res.add(i);
            }
        }
        return res;
    }
}
