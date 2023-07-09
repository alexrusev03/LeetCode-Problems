/**
 * @param {number[]} aliceSizes
 * @param {number[]} bobSizes
 * @return {number[]}
 */
var fairCandySwap = function(aliceSizes, bobSizes) {
    var mp = new Map();
    var res = new Array(2);
    var totalA=0, totalB=0;
    for(var i of bobSizes){
        totalB+=i;
        mp[i]=1;
    }
    for(var j of aliceSizes){
        totalA+=j;
    }
    for(var k of aliceSizes){
        if(mp[(totalB-totalA)/2+k]!=null){
            res[0]=k;
            res[1]=(totalB-totalA)/2+k;
            return res;
        }
    }
    return res;
};
