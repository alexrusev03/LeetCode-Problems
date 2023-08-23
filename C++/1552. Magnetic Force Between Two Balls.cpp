class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l = 1;
        int r = position[position.size()-1] - position[0];
        int mid = 0;
        while(l<=r){
            mid = (l+r)/2;
            if(helper(position,m,mid)==true){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return r;
    }
    bool helper(vector<int>& position, int m, int d){
        int prevpos = position[0];
        m--;
        for(int i=1; i<position.size(); i++){
            if(position[i]-prevpos >= d){
                m--;
                prevpos = position[i];
            }
            if(m==0){
                return true;
            }
        }
        return false;
    }
};
