/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function(version1, version2) {
    var n1 = version1.length;
    var n2 = version2.length;
    var i=0;
    var j=0;
    var v1=0;
    var v2=0;
    while(i<n1 || j<n2){
        while(i<n1 && version1[i]!='.'){
            v1 = v1*10 + version1[i]-'0';
            i++;
        }
        while(j<n2 && version2[j]!='.'){
            v2 = v2*10 + version2[j]-'0';
            j++;
        }
        if(v1<v2){
            return -1;
        }
        if(v1>v2){
            return 1;
        }
        i++;
        j++;
        v1=0;
        v2=0;
    }
    return 0;
};
