class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> str = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string saver = "";
        map<string,int> hash;
        for (int i = 0;i < words.size();i++)
        {
            for (int j = 0; j < words[i].size();j++)
            {
                saver += str[words[i][j] - 'a'];
            }
            hash[saver]++;
            saver = "";
        }
        return hash.size();
    }
};