class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev=0;
        for(int i = 32; i>0; i--){
            rev<<=1;
            rev=rev|(n&1);
            n>>=1;
        }
        return rev;
    }
};
