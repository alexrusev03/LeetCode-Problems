public class Solution {
    public IList<IList<int>> CombinationSum3(int k, int n) {
        List<IList<int>> res = new List<IList<int>>();
		List<int> temp = new List<int>();
        combination(res, temp, k, 1, n);
        return res;
    }
    void combination(List<IList<int>> res, List<int> temp, int k,  int b, int n) {
	    if (temp.Count == k && n == 0) {
		    res.Add(temp.ToArray());
	    }
	    for (int i = b; i <= 9; i++) {
		    temp.Add(i);
		    combination(res, temp, k, i+1, n-i);
		    temp.RemoveAt(temp.Count-1);
        }
    }
}
