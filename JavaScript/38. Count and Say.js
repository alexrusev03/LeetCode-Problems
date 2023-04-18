/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function(n) {
        var res = "";
	    if (n == 1){
			return "1";
        }
        var s = countAndSay(n - 1) + " ";
		var temp = s[0];
		var count=0;
		for (var i=0; i<s.length;i++)
			if (s[i] == temp){
				count++;
			}
			else{
				res += count.toString() + temp;
				temp = s[i];
				count = 1;
			}
		return res;
};
