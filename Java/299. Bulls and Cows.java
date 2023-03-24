class Solution {
    public String getHint(String secret, String guess) {
        int bulls=0;
        int all=0;
        int n = secret.length();
        Map<Character, Integer> map = new HashMap<>();
        for(int i=0;i<n;i++){
            if(guess.charAt(i)==secret.charAt(i)){
                bulls++;
            }
            if(map.containsKey(guess.charAt(i))){
                map.put(guess.charAt(i),map.get(guess.charAt(i))+1);
            }
            else{
                map.put(guess.charAt(i),1);
            }
        }
        for(int i=0;i<n;i++){
            if(map.containsKey(secret.charAt(i)) && map.get(secret.charAt(i))>0){
                all++;
                map.put(secret.charAt(i),map.get(secret.charAt(i))-1);
            }
        }      
        return String.valueOf(bulls)+'A'+ String.valueOf(all-bulls)+'B';
    }
}
