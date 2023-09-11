class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> hash;
        for (int i = 0; i < nums.size();i++)
        {
            cout<<nums[i]<< " ";
            map<int,int>::iterator it = hash.find(nums[i]);
            if (it != hash.end() )
            {
                if (abs(i - hash[nums[i]]) <= k)
                {
                    return true;
                }
            }
            cout<<hash[nums[i]]<<endl;
            hash[nums[i]] = i;
        }
        return false;
    }
};