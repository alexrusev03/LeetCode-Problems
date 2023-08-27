class Solution {
    public int minPartitions(String n) {
        int res = 0;
        for(int i = 0; i < n.length(); i++){
            if(res < n.charAt(i)-'0'){
                res = n.charAt(i)-'0';
            }
        }
        return res;
    }
}
