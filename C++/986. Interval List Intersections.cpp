class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int n1=firstList.size();
        int n2=secondList.size();
        int j = 0;
        for (int i = 0; i<n1; i++){
            while(j<n2) {
                if (secondList[j][0]>firstList[i][1]){
                    break;
                }
                else if (secondList[j][1]<firstList[i][0]){
                    j++;
                }
                else {
                    ans.push_back({max(firstList[i][0], secondList[j][0]), min(firstList[i][1], secondList[j][1])});
                    if (firstList[i][1]>secondList[j][1]){
                        j++;
                    }
                    else{
                        break;
                    }
                } 
            }
        }
        return ans;
    }
};
