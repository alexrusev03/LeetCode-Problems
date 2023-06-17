class Solution {
    public int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        int[] arr = new int[n];
        arr[0]=10;
        int p=9;
        int temp=9;
        for(int i=1; i<n; i++){
            p*=temp;
            arr[i]=arr[i-1]+p;
            temp--;
        }
        return arr[n-1];
    }
}
