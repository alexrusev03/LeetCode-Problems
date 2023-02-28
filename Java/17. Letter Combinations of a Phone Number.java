class Solution {
    public List<String> letterCombinations(String digits) {
        List<String> res = new ArrayList<>();
        if(digits.length()==0){
            return res;
        }
        String[] mapping = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        helper(0, new StringBuilder(), mapping, digits, res);
        return res;      
    }
    void helper(int idx, StringBuilder lc, String[] mapping, String digit, List<String> res){
        if(idx==digit.length()){
            res.add(lc.toString());
            return;
        }
        String let = mapping[digit.charAt(idx) - '0' - 2];

        for(int i=0; i<let.length(); i++){
            lc.append(let.charAt(i));
            helper(idx+1, lc, mapping, digit, res);
            lc.deleteCharAt(lc.length() - 1);
        }
    }
}
