class Solution {
    public String reverseOnlyLetters(String s) {
        char[] arr = s.toCharArray();
        int l = 0;
        int r = s.length() - 1;
        while(l <= r){
            if(!Character.isAlphabetic(s.charAt(l))){
                l++;
            }
            else if(!Character.isAlphabetic(s.charAt(r))){
                r--;
            }
            else{
                char temp = arr[l];
                arr[l++] = arr[r];
                arr[r--] = temp;
            }
        }
        return String.valueOf(arr);
    }
}
