class Solution {
public:
    int maxArea(vector<int>& height) {
        int S=0;
        int l=0;
        int r = height.size()-1;
        while(l<r){
            int h=min(height[l],height[r]);
            S=max(S,h*(r-l)); 
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return S;
    }
};
