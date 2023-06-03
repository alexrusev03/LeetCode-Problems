class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>> res = new ArrayList<>();
		List<Integer> temp = new ArrayList<>();
        combination(res, temp, k, 1, n);
        return res;
    }
    void combination(List<List<Integer>> res, List<Integer> temp, int k,  int b, int n) {
	    if (temp.size() == k && n == 0) {
	    	List<Integer> arr = new ArrayList<Integer>(temp);
		    res.add(arr);
	    }
	    for (int i = b; i <= 9; i++) {
		    temp.add(i);
		    combination(res, temp, k, i+1, n-i);
		    temp.remove(temp.size()-1);
        }
    }
}
