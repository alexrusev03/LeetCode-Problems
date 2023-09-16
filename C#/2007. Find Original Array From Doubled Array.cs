public class Solution {
    public int[] FindOriginalArray(int[] changed) {
        int n = changed.Length;
        int[] res = new int[n/2];
        Dictionary<int, int> dict = new Dictionary<int, int>();
        if(n % 2 == 1){
            return new int[0];
        }
        Array.Sort(changed);
        int t = 0;
        foreach(int i in changed){
            dict[i] = dict.GetValueOrDefault(i) + 1;
        }
        foreach(int j in changed){
            if(dict.GetValueOrDefault(j) <= 0){
                continue;
            }
            if(dict.GetValueOrDefault(2*j) <= 0){
                return new int[0];
            }
            res[t] = j;
            t++;
            dict[j]--;
            dict[2*j]--;
        }
        return res;
    }
}
