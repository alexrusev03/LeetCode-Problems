/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function(temperatures) {
    var n = temperatures.length;
    var arr = new Array(n).fill(0);
    var st = new Array();
    for(var i = 0; i < n; i++){
        while(st.length > 0){
            if(temperatures[i] > temperatures[st[st.length-1]]){
                arr[st[st.length-1]] = i - st[st.length-1];
                st.pop();
            }
            else{
                break;
            }
        }
        st.push(i);
    }
    return arr;
};
