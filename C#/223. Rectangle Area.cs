public class Solution {
    public int ComputeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = (ax2-ax1)*(ay2-ay1);
        int area2 = (bx2-bx1)*(by2-by1);
        int intersection = 0;
        if(ax2>bx1 && bx2>ax1 && by2>ay1 && ay2>by1){
            intersection = (Math.Min(bx2 , ax2) - Math.Max(bx1,ax1))*(Math.Min(ay2 , by2) - Math.Max(by1,ay1));
        }
        return area1+area2-intersection;
    }
}
