public class Solution {
    public bool IsIsomorphic(string s, string t) {
        var ms = new Dictionary<char, int>();
        var mt = new Dictionary<char, int>();
        for (int i = 0; i < s.Length; i++) {
            if (!ms.ContainsKey(s[i])) {
			    ms.Add(s[i], t[i]);
		    }
		    if (!mt.ContainsKey(t[i])) {
		    	mt.Add(t[i], s[i]);
		    }
            if (ms[s[i]] != t[i] || mt[t[i]] != s[i]) {
			    return false;
		    }
        }
        return true;
    }
}
