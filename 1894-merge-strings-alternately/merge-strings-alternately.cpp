class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = " ";
        int w1 = word1.length();
        int w2 = word2.length();
        for (int i = 0,j = 0;i < word1.length() || j < word2.length();i++,j++)
        {
            if (i < w1)
                s.insert(s.length() - 1,1,word1[i]);
            if (j < w2)
                s.insert(s.length() - 1,1,word2[i]);
        }
        return s.erase(s.length() - 1);;
    }
};