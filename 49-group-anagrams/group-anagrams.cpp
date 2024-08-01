class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>> mp;
        for (int i  = 0; i < strs.size();i++)
        {
            string sortedStr = strs[i];
            sort(sortedStr.begin(), sortedStr.end());
            mp[sortedStr].push_back(strs[i]);        
        }
        for(map<string,vector<string>>::iterator it = mp.begin() ; it != mp.end();it++)
            res.push_back(it->second);
        return res;
    }
};