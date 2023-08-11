/**
 * @param {number[]} arr
 * @param {number} start
 * @return {boolean}
 */
var canReach = function(arr, start) {
    var check = new Array(arr.length).fill(0);
    return helper(start, arr.length, arr, check);
}
var helper = function(idx, n, arr, check) {
    check[idx] = 1;
    if(arr[idx]==0){
        return true;
    }
    if(idx + arr[idx] < n && check[idx + arr[idx]]==0){
        if(helper(idx + arr[idx], n, arr, check)==true){
            return true;
        }
    }
    if(idx - arr[idx] >= 0 && check[idx - arr[idx]]==0){
        if(helper(idx - arr[idx], n, arr, check)==true){
            return true;
        }
    }
    return false;
};
