class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        List<Integer> res = new ArrayList<Integer>();
        for(int i=1; i<10; i++){
            helper(res, low, high, i, 0);
        }
        Collections.sort(res);
        return res;
    }
    public void helper(List<Integer> res, int low, int high, int i, int num){
        if(num>=low && num<=high){
            res.add(num);
        }
        if(num>high || i>9){
            return;
        }
        helper(res, low, high, i+1, num*10 + i);
    }
}
