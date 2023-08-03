public class Solution {
    public IList<string> CommonChars(string[] words) {
        List<string> res = new List<string>();
        foreach(char c in words[0]){
            int flag = 1;
            for(int i = 1; i < words.Length; i++){
                if(words[i].Contains(c)){
                    words[i] = words[i].Remove(words[i].IndexOf(c), 1); 
                }
                else{
                    flag = 0;
                    break;
                }
            }
            if(flag!=0){
                res.Add(c.ToString());
            }
        }
        return res;
    }
}
