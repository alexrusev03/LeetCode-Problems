public class Solution {
    public int Trap(int[] height) {
        int n= height.Length;
        int sol=0;
        int[] l=new int[n];
        int[] r=new int[n];
        l[0]=height[0];
        r[n-1]=height[n-1];
        for(int i=1; i<n; i++){
            l[i]= Math.Max(l[i-1],height[i]);
        }
        for(int i=n-2; i>=0; i--){
            r[i]= Math.Max(r[i+1],height[i]);
        }
        for(int i=0; i<n; i++){
            sol+= (Math.Min(l[i], r[i]))-height[i];
        }
        return sol;
    }
}
