/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    var minPrice=prices[0];
    var profit=0;
    for (var i = 0; i<prices.length;i++){
        minPrice=Math.min(minPrice,prices[i]);
        profit=Math.max(profit,prices[i]-minPrice);
    }
    return profit;
};
