class Solution {
public:
    string countAndSay(int n) {
        string res = "";
	    if (n == 1){
			return "1";
        }
        string s = countAndSay(n - 1) + " ";
		char temp = s[0];
		int count=0;
		for (int i=0; i<s.size();i++)
			if (s[i] == temp){
				count++;
			}
			else{
				res += to_string(count) + temp;
				temp = s[i];
				count = 1;
			}
		return res;
    }
};
