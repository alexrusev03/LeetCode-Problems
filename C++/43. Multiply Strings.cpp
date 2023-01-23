class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        vector<int> ints(num1.size()+num2.size(), 0);
        for(int i = num1.size()-1; i>=0;i--){
            for(int j = num2.size()-1;j>=0;j--){
                ints[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                ints[i+j]+=ints[i+j+1]/10;
                ints[i+j+1]%=10;
            }
        }
        int i = 0;
        while(ints[i]==0){
            i++;
        }
        string str="";
        while (i < ints.size()){
            str += to_string(ints[i++]);
        }
        return str;
    }
};
