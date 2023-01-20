class Solution {
public:
string addStrings(string num1, string num2) {
    string answer;
    int i = num1.size()-1;
    int j = num2.size()-1;
    int carry = 0;
    while(i >= 0 || j >= 0){
        int sum = carry;
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
        answer += to_string(sum%10);
    }
    if(carry!=0) answer += to_string(carry);
    reverse(answer.begin(), answer.end());
    return answer;
}
};
