public class Solution {
    public int MaxDistance(int[] position, int m) {
        Array.Sort(position);
        int l = 1;
        int r = position[position.Length-1] - position[0];
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
    public bool helper(int[] position, int m, int d){
        int prevpos = position[0];
        m--;
        for(int i=1; i<position.Length; i++){
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
}
