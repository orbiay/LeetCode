class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> Hash(26,0);
        vector<int> hash(26,0);
        int count = 0;
        for (int i = 0; i < jewels.length();i++)
        {
            if (islower(jewels[i]))
                hash[jewels[i] - 'a']++;
            else if (isupper(jewels[i]))
                Hash[jewels[i] - 'A']++;
        }
        for (int i = 0; i < stones.size();i++)
        {
            if (islower(stones[i]) && hash[stones[i] -'a'] > 0)
                count++;
            else if (isupper(stones[i]) && Hash[stones[i] - 'A'] > 0)
                count++;
        }
        return count;
    }
};