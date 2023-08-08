public class Solution {
    public IList<IList<int>> MinimumAbsDifference(int[] arr) {
        int n = arr.Length;
        IList<IList<int>> res = new List<IList<int>>();
        Array.Sort(arr);
        int diff = Int32.MaxValue;
        for(int i=0;i<n-1;i++){
            diff = Math.Min(diff,arr[i+1]-arr[i]);
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i] == diff){
                res.Add(new List<int>(){arr[i],arr[i+1]});
            }
        }
        return res;
    }
}
