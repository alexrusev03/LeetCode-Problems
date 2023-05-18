/**
 * @param {string} s
 * @return {string[][]}
 */
var partition = function(s) {
    var subS=new Array();
    var res=new Array();
    solve(s,0,subS,res);
    return res;
};
var solve = function(s, idx,subS,res){
    if (idx==s.length){
        res.push([...subS]);
        return;
    }
    for (var i = idx; i <s.length; i++){
        if(check(s,idx,i)==true){
            subS.push(s.substring(idx,i+1));
            solve(s,i+1,subS,res);
            subS.pop();
        }
    }
};
var check = function(s, i, j){
    while (i<=j){
        if(s[i++] !=s[j--]){
            return false;
        }
    }
    return true;
};
