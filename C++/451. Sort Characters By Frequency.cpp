class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        int n = s.size();
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> vec;
        for(auto i:mp){
            vec.push_back({i.second,i.first});
        }
        sort(vec.begin(),vec.end(),[](pair<int,char> &a,pair<int,char> &b ){
            return a.first > b.first;
        });
		
        string str="";
        
        for(auto i:vec){
            while(i.first--!=NULL){
                str+=i.second;
            }
        }
		
        return str;
    }
};
