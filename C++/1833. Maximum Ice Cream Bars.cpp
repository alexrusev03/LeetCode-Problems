class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int res = 0;
        sort(costs.begin(),costs.end());
        for(int i: costs){
            if(i>coins){
                break;
            }
            coins -= i;
            res++;
        }
        return res;
    }
};
