public class Solution {
    public bool CarPooling(int[][] trips, int capacity) {
        int[] passengers = new int[1001];
        foreach(int[] i in trips){
            passengers[i[1]] += i[0];
            passengers[i[2]] -= i[0];
        }
        foreach(int count in passengers){
            capacity -= count;
            if(capacity<0){
                return false;
            }
        }
        return true;
    }
}
