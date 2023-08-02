class Solution {
    public List<Integer> pathInZigZagTree(int label) {
        List<Integer> res = new ArrayList<Integer>();
        res.add(label);
        for(int i = (int)(Math.log(label)/Math.log(2)); i>0; i--){
            label=(int)Math.pow(2,i-1)+(int)Math.pow(2,i)-(int)label/2-1;
            res.add(label);
        }
        Collections.reverse(res);
        return res;
    }
}
