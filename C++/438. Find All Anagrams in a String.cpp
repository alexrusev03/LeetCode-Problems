class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int np=p.size();
        int ns=s.size();
        if(np > ns) {return {};}
        vector<int> freq(26, 0);
        vector<int> res;
        vector<int> w(26, 0);
        for(int i=0;i<np;i++){
            freq[p[i] - 'a']++;
            w[s[i] - 'a']++;
        }
        if(freq == w){res.push_back(0);}
        for(int i=np;i<ns;i++){
            w[s[i-np] - 'a']--;
            w[s[i] - 'a']++;
            if(w == freq) res.push_back(i - np + 1);  
        }
        return res;
    }
};
