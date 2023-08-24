/**
 * @param {number[][]} trips
 * @param {number} capacity
 * @return {boolean}
 */
var carPooling = function(trips, capacity) {
    var passengers = new Array(1001).fill(0);
    for(var i of trips){
        passengers[i[1]] += i[0];
        passengers[i[2]] -= i[0];
    }
    for(var count of passengers){
        capacity -= count;
        if(capacity<0){
            return false;
        }
    }
    return true;
};
