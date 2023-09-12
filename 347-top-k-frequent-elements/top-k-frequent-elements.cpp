class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::map<int, int> hash;
        int max = 0;
        std::vector<int> ret;
        
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
            if (max < hash[nums[i]])
                max = hash[nums[i]];
        }
        
        std::vector<std::pair<int, int>> a(hash.begin(), hash.end());
        
        std::sort(a.begin(), a.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second < b.second;
        });
        
        int j = hash.size() - 1;
        for (int i = 0; i < k && j >= 0; i++, j--) {
            ret.push_back(a[j].first);
        }
        
        return ret;
    }
};