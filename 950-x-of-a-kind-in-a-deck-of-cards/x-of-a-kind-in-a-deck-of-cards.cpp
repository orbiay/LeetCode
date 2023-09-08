class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        vector<int> hash(10001,0);
        int max = 0 ;
        if (deck.size() <= 1)
            return false;
        for(int i = 0;i < deck.size();i++)
            hash[deck[i]]++;
        for (int i = 1;i < deck.size();i++)
        {
            max  = gcd(max,hash[deck[i]]);
        }
        return  max >= 2;
    }
};