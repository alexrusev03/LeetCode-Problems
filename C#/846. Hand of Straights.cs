public class Solution {
    public bool IsNStraightHand(int[] hand, int groupSize) {
        Array.Sort(hand);
        int n = hand.Length;
        for(int i=0; i<n; i++){
            if(hand[i] == -1){
                continue;
            }
            int k = i;
            for(int j=1; j<groupSize; j++){
                while(k < n && hand[i] + j != hand[k]){
                    k++;
                }
                if(k == n){
                    return false;
                }
                hand[k] = -1;
            }
        }
        return true;
    }
}
