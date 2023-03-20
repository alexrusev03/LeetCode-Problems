/* The isBadVersion API is defined in the parent class VersionControl.
      bool IsBadVersion(int version); */

public class Solution : VersionControl {
    public int FirstBadVersion(int n) {
        int l = 1, r = n;
        while(l<r){
            int mid = l+(r-l)/2;
            if(IsBadVersion(mid)==true){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
}
