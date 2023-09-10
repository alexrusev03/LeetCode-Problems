public class Solution {
    public IList<int> LexicalOrder(int n) {
        List<int> res = new List<int>();
        int curr = 1;
        for(int i=0; i<n; i++){
            res.Add(curr);
            curr*=10;
            while(curr>n){
                curr/=10;
                curr++;
                while(curr%10==0){
                    curr/=10;
                }
            }
        }
        return res;
    }
}
