class Solution {
    public: vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> sol(n,vector<int>(n,1) );
        int num=1;
        int direc=0;

        int left=0,right=n-1;
        int top=0,bot=n-1;
        while(left<=right && top<=bot){
            if(direc==0){
                for(int i=left;i<=right;i++){
                    sol[top][i]=num;
                    num++;
                }
                direc=1;
                top++;
            }
            else if(direc==1){
                for(int i=top;i<=bot;i++){
                    sol[i][right]=num;
                    num++;
                }
                direc=2;
                right--;
            }
            else if(direc==2){
                for(int i=right;i>=left;i--){
                    sol[bot][i]=num;
                    num++;
                }
                direc=3;
                bot--; // decrease bottum row
            }
            else if(direc==3){
                for(int i=bot;i>=top;i--){
                    sol[i][left]=num;
                    num++;
                }
                direc=0;
                left++; //increase left col
            }
        }
        return sol;
    }
};
