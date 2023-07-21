/**
 * @param {number[][]} bookings
 * @param {number} n
 * @return {number[]}
 */
var corpFlightBookings = function(bookings, n) {
    var res = new Array(n).fill(0);
    for(var i = 0; i<bookings.length; i++){
        res[bookings[i][0]-1]+=bookings[i][2];
        if(bookings[i][1]<n){
            res[bookings[i][1]]-=bookings[i][2];
        }
    }
    for(var i = 1; i<n; i++){
        res[i]+=res[i-1];
    }
    return res;
};
