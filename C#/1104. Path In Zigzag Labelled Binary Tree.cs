public class Solution {
    public IList<int> PathInZigZagTree(int label) {
        List<int> res = new List<int>();
        res.Add(label);
        for(int i = (int)(Math.Log(label)/Math.Log(2)); i>0; i--){
            label=(int)Math.Pow(2,i-1)+(int)Math.Pow(2,i)-(int)label/2-1;
            res.Add(label);
        }
        res.Reverse();
        return res;
    }
}
