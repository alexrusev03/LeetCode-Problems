class Solution {
public:
vector<int> partitionLabels(string s) {
    int n = s.size();
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]=i;
    }
    
    int begin=0, end=0;
    vector<int> vec;
    
    for(int i=0;i<n;i++)
    {
        end=max(end,mp[s[i]]);
        if(i==end)
        {
            vec.push_back(end-begin+1);
            begin=i+1;
        }          
    }
    
    if(begin<n)
        vec.push_back(n-begin);
    
    return vec;
}
};
