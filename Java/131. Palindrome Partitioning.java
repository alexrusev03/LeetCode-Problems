class Solution {
    public List<List<String>> partition(String s) {
        List<String> subS=new ArrayList<>();
        List<List<String>> res=new ArrayList<>();
        solve(s,0,subS,res);
        return res;
    }
    void solve(String s, int idx,List<String> subS,List<List<String>> res){
        if (idx==s.length()){
            res.add(new ArrayList<>(subS));
            return;
        }
        for (int i = idx; i <s.length() ; i++){
            if(check(s,idx,i)==true){
                subS.add(s.substring(idx,i+1));
                solve(s,i+1,subS,res);
                subS.remove(subS.size()-1);
            }
        }
    }
    boolean check(String s, int i, int j){
        while (i<=j){
            if(s.charAt(i++) !=s.charAt(j--)){
                return false;
            }
        }
        return true;
    }
}
