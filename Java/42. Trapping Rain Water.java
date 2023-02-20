class Solution {
    public int trap(int[] height) {
        int n= height.length;
        int sol=0;
        int[] l=new int[n];
        int[] r=new int[n];
        l[0]=height[0];
        r[n-1]=height[n-1];
        for(int i=1; i<n; i++){
            l[i]= Math.max(l[i-1],height[i]);
        }
        for(int i=n-2; i>=0; i--){
            r[i]= Math.max(r[i+1],height[i]);
        }
        for(int i=0; i<n; i++){
            sol+= (Math.min(l[i], r[i]))-height[i];
        }
        return sol;
    }
}
