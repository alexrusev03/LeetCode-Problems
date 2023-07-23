public class Solution {
    public bool IsAlienSorted(string[] words, string order) {
        Dictionary<char,int> dict = new Dictionary<char,int>();
        for(int i=0; i<order.Length; i++){
            dict[order[i]] = i;
        }
        for(int i=0; i<words.Length-1; i++){
            string s1 = words[i];
            string s2 = words[i+1];
            for(int j=0; j<s1.Length; j++){
                if(j == s2.Length){
                    return false;
                }
                if(s1[j] != s2[j]){
                    if(dict[s1[j]] > dict[s2[j]]){
                        return false;
                    }
                    break;
                }
            }
        }
        return true;
    }
}
