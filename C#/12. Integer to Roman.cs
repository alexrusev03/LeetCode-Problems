public class Solution {
    public string IntToRoman(int num) {
        int[] arr = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string[] str = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string r = "";
        for (int i = 0; i < arr.Length; i++) {
            while (num >= arr[i]) {
                r += str[i];
                num -= arr[i];
            }
        }
        return r;
    }
}
