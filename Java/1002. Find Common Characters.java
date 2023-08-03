class Solution {
    public List<String> commonChars(String[] words) {
        List<String> res = new ArrayList<>();
        for(int i=0;i<words[0].length();i++){
            String c=words[0].charAt(i)+"";
            int flag = 1;
            for(int j = 1; j < words.length; j++){
                if(words[j].contains(c)){
                    words[j]=words[j].replaceFirst(c,"");    
                }
                else{
                    flag = 0;
                    break;
                }
            }
            if(flag!=0){
                res.add(c);
            }
        }
        return res;
    }
}
