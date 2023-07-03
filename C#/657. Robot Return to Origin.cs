public class Solution {
    public bool JudgeCircle(string moves) {
        int u=0, d=0, l=0, r=0;
        foreach(char i in moves){
            if(i == 'U'){
                u++;
            }
            else if(i == 'D'){
                d++;
            }
            else if(i == 'L'){
                l++;
            }
            else if(i == 'R'){
                r++;
            }
        }
        if(u==d && l==r){
            return true;
        }
        return false;
    }
}
