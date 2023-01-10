class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int i = 0;
       for(int j = 0; j<nums.size(); j++)
       {
           if(nums[j]!=0)
           {
                 swap(nums[j] , nums[i]);
                 i++;
           }
       }
    }
};
// or
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        for(int i=0; i<nums.size(); i++){if(nums[i]==0){cnt++;}}
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                cnt--;
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                i--;
            }
            if(cnt==0){break;}
        }
    }
};
// or
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        int i = 0;
        for(int j=0; j<nums.size(); j++){if(nums[j]==0){cnt++;}}
        while(i<nums.size()){
            if(nums[i]==0){
                cnt--;
                nums.erase(nums.begin()+i);
                nums.push_back(0);
            }
            else{
                i++;
            }
            if(cnt==0){break;}
        }
    }
};
