public class Solution {
    public string GetPermutation(int n, int k) {
        string res = "";
        int f=1;
        List<int> l = new List<int>();
        for(int i = 1; i<n; i++){
            f*=i;
            l.Add(i);
        }
        l.Add(n);
        k--;
        while(l.Count>0){
            res+=l[k/f];
            l.RemoveAt(k/f);
            k%=f;
            if(l.Count!=0){
                f/=l.Count;
            }
        }
        return res;
    }
}
