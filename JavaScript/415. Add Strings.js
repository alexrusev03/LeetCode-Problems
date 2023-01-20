/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function(num1, num2) {
    var answer=[];
    var i = num1.length-1;
    var j = num2.length-1;
    var carry = 0;
    while(i >= 0 || j >= 0){
        var sum = carry;
        if(i >= 0){
            sum += num1[i] -'0';
            i--; 
        }
        if(j >= 0){
            sum += num2[j] - '0';
            j--;
        }
        if(sum>9){
            carry=1;
        }
        else{carry=0;}
        var remainder = sum%10;
        answer.push(remainder);
    }
    if(carry!=0) answer.push(carry);
    return answer.reverse().join("");
};
