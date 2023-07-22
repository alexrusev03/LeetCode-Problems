public class Solution {
    public string ReverseOnlyLetters(string s) {
        char[] arr = s.ToCharArray();
        int l = 0;
        int r = s.Length - 1;
        while(l <= r){
            if(!char.IsLetter(s[l])){
                l++;
            }
            else if(!char.IsLetter(s[r])){
                r--;
            }
            else{
                char temp = arr[l];
                arr[l++] = arr[r];
                arr[r--] = temp;
            }
        }
        return new string(arr);
    }
}
