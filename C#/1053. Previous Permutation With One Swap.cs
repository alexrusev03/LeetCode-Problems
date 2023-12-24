public class Solution {
    public int[] PrevPermOpt1(int[] arr) {
        int n = arr.Length;
        int i = n-2;
        int j = n-1;
        while(i>=0 && arr[i+1]>=arr[i]){
            i--;
        }
        if(i==-1){
            return arr;
        }
        while((arr[j]>=arr[i] && j>i) || arr[j-1]==arr[j]){
            j--;
        }
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        return arr;
    }
}
