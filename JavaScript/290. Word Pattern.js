/**
 * @param {string} pattern
 * @param {string} s
 * @return {boolean}
 */
var wordPattern = function(pattern, s) {
        s=s+' ';
        var n = s.length;
        var m = pattern.length;
        var str="";
        var vec = [];
        for(var i = 0; i<n; i++){
            if(s[i]!=' '){
                str+=s[i];
            }
            else{
                vec.push(str);
                str="";
            }
        }
        var wordCount=vec.length;
        if(m!=wordCount){return false;}
        for(var k = 0; k<m-1; k++){
            for(var l = k+1; l<m; l++){
                if(pattern[k]==pattern[l] && vec[k]==vec[l]){
                    continue;
                }
                else if(pattern[k]!=pattern[l] && vec[k]!=vec[l]){
                    continue;
                }
                else{return false;}
            }
        }
        return true;
};
