/**
 * @param {number} n
 * @param {number[][]} trust
 * @return {number}
 */
var findJudge = function(n, trust) {
    if (trust.length == 0 && n == 1){
        return 1;
    }
    let trusted=new Array(n+1).fill(null);
    for(var i = 0; i<trust.length; i++){
        trusted[trust[i][0]]--;
        trusted[trust[i][1]]++;
    }
    for(var i = 0; i<trusted.length;i++){
        if(trusted[i]==n-1){return i;}
    }
    return -1;
};
