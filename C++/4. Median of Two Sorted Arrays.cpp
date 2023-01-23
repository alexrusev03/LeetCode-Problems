class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        for(float i=n1; i<n1+n2;i++){
            nums1.push_back(nums2[i-n1]);
        }
        sort(nums1.begin(),nums1.end());
        if((n1+n2)%2==0){
            int num1=(n1+n2)/2-1;
            int num2=(n1+n2)/2;
            float med1=(nums1[num1]+nums1[num2])/2.0;
            return med1;
        }
        else{
            int med2=(n1+n2)/2;
            return nums1[med2];
        }
        return 0;
    }
};
