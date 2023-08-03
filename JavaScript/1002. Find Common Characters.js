/**
 * @param {string[]} words
 * @return {string[]}
 */
var commonChars = function(words) {
        var res = new Array();
        for(var c of words[0]){
            var flag = 1;
            for(var i = 1; i < words.length; i++){
                if(words[i].includes(c)){
                    words[i] = words[i].replace(c,""); 
                }
                else{
                    flag = 0;
                    break;
                }
            }
            if(flag!=0){
                res.push(c);
            }
        }
        return res;
};
