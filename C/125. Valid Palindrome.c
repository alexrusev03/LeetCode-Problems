bool isPalindrome(char * s){
        int l = 0;
        int r = strlen(s) - 1;
        while(l <= r) {
        	char currL = tolower(s[l]);
        	char currR = tolower(s[r]);
        	if (!isalnum(currL)) {
        		l++;
                continue;
        	}
            if(!isalnum(currR)) {
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
