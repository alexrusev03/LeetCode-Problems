/**
 * @param {string} s
 * @return {number[]}
 */
var partitionLabels = function(s) {
    var n = s.length;
    var mp = new Map();
    for(var i=0;i<n;i++)
    {
        mp[s[i]]=i;
    }
    
    var begin=0, end=0;
    var vec = new Array();
    
    for(var i=0;i<n;i++)
    {
        end=Math.max(end,mp[s[i]]);
        if(i==end)
        {
            vec.push(end-begin+1);
            begin=i+1;
        }          
    }
    
    if(begin<n)
        vec.push(n-begin);
    
    return vec;
};
