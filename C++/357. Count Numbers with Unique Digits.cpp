class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        vector<int> vec(n);
        vec[0]=10;
        int p=9;
        int temp=9;
        for(int i=1; i<n; i++){
            p*=temp;
            vec[i]=vec[i-1]+p;
            temp--;
        }
        return vec[n-1];
    }
};
