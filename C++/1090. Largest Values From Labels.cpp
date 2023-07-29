class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        vector<pair<int, int>> v;
        map<int, int> mp;
        int n = values.size();
        int res = 0;
        for(int i=0; i<n; i++){
            v.push_back({values[i], labels[i]});
        }
        sort(v.begin(),v.end(),[](const auto& a, const auto& b){return a.first > b.first;});
        for(int i=0; i<n; i++){
            mp[v[i].second]++;
            if(mp.find(v[i].second) != mp.end() && numWanted && mp[v[i].second] <= useLimit){
                res += v[i].first;
                numWanted--;
            }
        }
        return res;
    }
};
