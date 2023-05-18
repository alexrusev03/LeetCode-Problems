public class Solution {
    public IList<IList<string>> Partition(string s) {
        List<string> subS=new List<string>();
        List<IList<string>> res=new List<IList<string>>();
        solve(s,0,subS,res);
        return res;
    }
    void solve(string s, int idx,List<string> subS,List<IList<string>> res){
        if (idx==s.Length){
            res.Add(new List<string>(subS));
            return;
        }
        for (int i = idx; i <s.Length; i++){
            if(check(s,idx,i)==true){
                subS.Add(s.Substring(idx,i-idx+1));
                solve(s,i+1,subS,res);
                subS.RemoveAt(subS.Count-1);
            }
        }
    }
    bool check(string s, int i, int j){
        while (i<=j){
            if(s[i++] !=s[j--]){
                return false;
            }
        }
        return true;
    }
}
