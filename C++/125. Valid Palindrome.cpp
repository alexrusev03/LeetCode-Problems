class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l <= r) {
        	char currL = tolower(s[l]);
        	char currR = tolower(s[r]);
        	if (!isalnum(int(currL))) {
        		l++;
                continue;
        	}
            if(!isalnum(int(currR))) {
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
};
