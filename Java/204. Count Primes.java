class Solution {
    public int countPrimes(int n) {
        int res = 0;
        int[] arr = new int[n];
        for(int i=2;i<n;i++){
            if(arr[i]==0){
                res++;
                for(int j=2;i*j<n;j++){
                    arr[i*j]=1;
                }
            }
        }
        return res;
    }
}
