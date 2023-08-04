public class Solution {
    public IList<int> SequentialDigits(int low, int high) {
        List<int> res = new List<int>();
        for(int i=1; i<10; i++){
            helper(res, low, high, i, 0);
        }
        res.Sort();
        return res;
    }
    public void helper(List<int> res, int low, int high, int i, int num){
        if(num>=low && num<=high){
            res.Add(num);
        }
        if(num>high || i>9){
            return;
        }
        helper(res, low, high, i+1, num*10 + i);
    }
}
