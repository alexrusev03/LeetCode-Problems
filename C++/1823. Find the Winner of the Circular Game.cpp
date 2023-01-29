class Solution {
public:
    int sol(int n, int k){
        if(n==1){
            return 0;
        }
        else{
            return (sol(n-1,k)+k)%n;
        }
    }
    int findTheWinner(int n, int k) {
        return sol(n,k)+1;
    }
};
