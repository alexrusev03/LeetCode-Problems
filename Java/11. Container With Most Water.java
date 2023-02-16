class Solution {
    public int maxArea(int[] height) {
        int S=0;
        int l=0;
        int r = height.length-1;
        while(l<r){
            int h=Math.min(height[l],height[r]);
            S=Math.max(S,h*(r-l)); 
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return S;
    }
}
