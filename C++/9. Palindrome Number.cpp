#include <iostream>
using namespace std;
class Solution {
public:
    Solution(unsigned int n){
        setInt(n);
    }
    void setInt(unsigned int i){
        cin>>i;
        x=i;
    }
    bool isPalindrome() {
        unsigned int num, rem, rev = 0;
        num = x;
        while(x!=0){
            rem = x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if (rev==num && num>=0){
            return true;
        }
        else{
            return false;
        }
    }
private:
    unsigned int x;
};
int main(){
    Solution obj(122);
    cout<<obj.isPalindrome();
    return 0;
}
