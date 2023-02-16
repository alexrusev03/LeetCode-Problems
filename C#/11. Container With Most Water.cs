public class Solution {
    public int MaxArea(int[] height) {
        int S=0;
        int l=0;
        int r = height.Length-1;
        while(l<r){
            int h=Math.Min(height[l],height[r]);
            S=Math.Max(S,h*(r-l)); 
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
