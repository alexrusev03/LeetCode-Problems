class Solution {
    public boolean isPalindrome(String s) {
        int l = 0;
        int r = s.length() - 1;
        while(l <= r) {
        	char currL = Character.toLowerCase(s.charAt(l));
        	char currR = Character.toLowerCase(s.charAt(r));
        	if (!Character.isLetterOrDigit(currL)) {
        		l++;
                continue;
        	}
            if(!Character.isLetterOrDigit(currR)) {
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
