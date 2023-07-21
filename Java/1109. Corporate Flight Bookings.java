class Solution {
    public int[] corpFlightBookings(int[][] bookings, int n) {
        int[] res = new int[n];
        for(int i = 0; i<bookings.length; i++){
            res[bookings[i][0]-1]+=bookings[i][2];
            if(bookings[i][1]<n){
                res[bookings[i][1]]-=bookings[i][2];
            }
        }
        for(int i = 1; i<n; i++){
            res[i]+=res[i-1];
        }
        return res;
    }
}
