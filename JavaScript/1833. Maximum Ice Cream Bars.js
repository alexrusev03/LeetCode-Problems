/**
 * @param {number[]} costs
 * @param {number} coins
 * @return {number}
 */
var maxIceCream = function(costs, coins) {
    var res = 0;
    costs.sort((a,b) => a-b);
    for(var i of costs){
        if(i>coins){
            break;
        }
        coins -= i;
        res++;
    }
    return res;
};
