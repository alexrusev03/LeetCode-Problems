class Solution {
    public boolean carPooling(int[][] trips, int capacity) {
        int[] passengers = new int[1001];
        for(int[] i: trips){
            passengers[i[1]] += i[0];
            passengers[i[2]] -= i[0];
        }
        for(int count: passengers){
            capacity -= count;
            if(capacity<0){
                return false;
            }
        }
        return true;
    }
}
