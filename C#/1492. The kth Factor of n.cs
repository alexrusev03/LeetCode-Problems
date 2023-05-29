public class Solution {
    public int KthFactor(int n, int k) {
        List<int> list = new List<int>();
        for(int i = 1; i<=n; i++){
            if(n%i==0){
                list.Add(i);
            }
        }
        if(k>list.Count){
            return -1;
        }
        return list[k-1];
    }
}
