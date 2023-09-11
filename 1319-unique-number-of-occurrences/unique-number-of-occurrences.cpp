class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> poshash(2002,0);
        vector<int> hash(1001,0);
        for (int i = 0;i < arr.size();i++)
        {
            if (arr[i] < 0)
                poshash[(arr[i] * -1) + 1001]++;
            else 
                poshash[arr[i]]++;
        }
        for (int i = 0;i < poshash.size();i++)
            if (poshash[i] > 0)
                hash[poshash[i]]++;
        for (int i = 0; i < hash.size();i++)
            if (hash[i] >= 2)
                return false;
        return true;
    }
};


