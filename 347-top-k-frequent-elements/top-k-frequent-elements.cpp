class Solution {
public:
    bool cmp(pair<string, int>& a, pair<string, int>& b) 
    { 
        return a.second > b.second; 
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() == 1 || nums.size() == k)
            return nums;
        map<int,int> hash;
        vector<pair<int,int>> vec;
        vector<int> res;

        for (int i = 0;i < nums.size();i++)
            hash[nums[i]]++;
        for (map<int,int>::iterator it = hash.begin();it != hash.end();it++)
            vec.push_back(*it);
        
        std::sort(vec.begin(), vec.end(), [](std::pair<int, int>& a, std::pair<int, int>& b) {
            return a.second > b.second;
        });
        hash.clear();
        
        for (vector<pair<int,int>> ::iterator it = vec.begin() ;it != vec.end() && k != 0;it++)
        {
            res.push_back(it->first);
            k--;
        }
        return res;
    }
};