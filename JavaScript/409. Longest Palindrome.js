/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function(s) {
        var n = s.length;
        var count = 0;
        const mp = new Map();
        for(let i of s){
            mp.set(i, mp.get(i) + 1 || 1);
            if(mp.get(i)%2==0){
                count=count+mp.get(i);
                mp.set(i,0);
            }
        }
        for(let i of s){
            if(mp.get(i)%2==1){
                count+=mp.get(i);
                break;
            }
        }
        return count;
};
