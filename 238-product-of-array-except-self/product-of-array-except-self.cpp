class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
        vector<int> pre(n,0);
        vector<int> suff(n,0);
        vector<int> ans(n,0);

        pre[0] = 1;
        suff[n - 1] = 1;
        for (int i = 1;i < n;i++)
            pre[i] = pre[i - 1] * nums[i - 1];
        for (int i = n - 2; i >= 0;i--)
            suff[i] = suff[i + 1] * nums[i + 1];
        for (int i = 0 ; i < n ; i++)
            ans[i] = pre[i] * suff[i];
        return ans;
    }
};
// [6,12,4,4]
// i = 3
// prefix [1,6,72,288]
// sufix [192,16,4,1]
// ans [192,96,288,288]
