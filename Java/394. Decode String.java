class Solution {
    public String decodeString(String s) {
        Stack<StringBuilder> strStack = new Stack<>();
        Stack<Integer> nums = new Stack<>();
        StringBuilder ans = new StringBuilder();
        int num = 0;
        for(char c:s.toCharArray()) {
            if(c>='0' && c<='9') {
                num = num*10 + (c-'0');                              
            }
            else if(c == '[') {
                strStack.push(ans);
                nums.push(num);
                ans=new StringBuilder();
                num = 0;
            }
            else if(c == ']') {
                StringBuilder temp=ans;
                int i = nums.pop();
                ans = strStack.pop();
                while(i-->0) {
                    ans.append(temp);
                }
            }
            else{
                ans.append(c);
            }
        }
        return ans.toString();
    }
}
