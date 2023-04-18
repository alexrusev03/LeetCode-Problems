public class Solution {
    public string CountAndSay(int n) {
        string res = "";
	    if (n == 1){
			return "1";
        }
        string s = CountAndSay(n - 1) + " ";
		char temp = s[0];
		int count=0;
		for (int i=0; i<s.Length;i++)
			if (s[i] == temp){
				count++;
			}
			else{
				res += count.ToString() + temp;
				temp = s[i];
				count = 1;
			}
		return res;
    }
}
