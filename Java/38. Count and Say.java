class Solution {
    public String countAndSay(int n) {
        String res = "";
	    if (n == 1){
			return "1";
        }
        String s = countAndSay(n - 1) + " ";
		char temp = s.charAt(0);
		Integer count=0;
		for (int i=0; i<s.length();i++)
			if (s.charAt(i) == temp){
				count++;
			}
			else{
				res += count.toString() + temp;
				temp = s.charAt(i);
				count = 1;
			}
		return res;
    }
}
