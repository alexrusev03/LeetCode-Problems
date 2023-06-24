class Solution {
public:
    int findComplement(int num) {
        int t = num;
        long p = 1;
        while(t!=0){
            t = t >> 1;
            p = p << 1;
        }
        return (p-1)^num;
    }
};
