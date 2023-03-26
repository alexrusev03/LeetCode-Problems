class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> map;
        vector<pair<string,int>> vec;
        vector<string> res;
        for (int i=0; i<words.size(); i++){
            map[words[i]]++;
        }
        for (auto i: map){
            vec.push_back({i.first,i.second});
        }
        sort(vec.begin(),vec.end(),helper);
        reverse(vec.begin(),vec.end());
        for (int i=0; i<k; i++){
            res.push_back(vec[i].first);
        }
        return res;
    }
    static bool helper(pair<string,int> i, pair<string,int> j){
        if (i.second != j.second) return (i.second < j.second);
        return (i.first > j.first);
    }
};
