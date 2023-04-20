public class Solution {
    public bool IsPalindrome(string s) {
        int l = 0;
        int r = s.Length - 1;
        while(l <= r) {
        	char currL = Char.ToLower(s[l]);
        	char currR = Char.ToLower(s[r]);
        	if (!Char.IsLetterOrDigit(currL)) {
        		l++;
                continue;
        	}
            if(!Char.IsLetterOrDigit(currR)) {
        		r--;
                continue;
        	}
        	if(currL == currR) {
                l++;
                r--;
        	}
            else{
                return false;
        	}
        }
        return true;
    }
}
