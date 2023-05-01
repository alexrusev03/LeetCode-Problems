class Solution {
    public List<String> restoreIpAddresses(String s) {
        List<String> res = new ArrayList<>();
        helper(res, new ArrayList<>(), s, 0);
        return res;
    }
    public void helper(List<String> res, List<String> l, String s, int i) {
        int n = l.size();
        if (i >= s.length()) {
            if (n == 4) 
                res.add(String.join(".", l));
                
            return;
        }
        if(n >= 4){
            return;   
        }
        else{
            for (int j = 1; j <= 3 && i + j <= s.length(); j++) {
                String str = s.substring(i, i + j);
                if (Integer.parseInt(str) >= 0 && Integer.parseInt(str) <= 255) {
                    l.add(str);
                    helper(res, l, s, i + j);
                    l.remove(l.size() - 1);
                }
                if (Integer.parseInt(str) == 0){
                    break;
                }
            }
        }
    }
}
