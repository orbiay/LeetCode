class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // cout << trust.size() << " " << trust.empty() << endl;
        if (trust.empty() && n > 1)
            return -1;
        if (trust.empty() && n == 1)
            return 1;
        vector<int> hash(1001,0);
        map<int,int> ha;
        vector<int> v ;
        int count = 0;
        int save = 0;
        pair<int,int> pr;
        for (int i = 0;i < trust.size();i++)
        {
            v = trust[i];
            hash[v[1]]++;
            ha[v[0]] = v[1];
        }

        for (int i = 0;i < trust.size();i++)
        {
            v = trust[i];
            if (hash[v[1]] == n-1 )
            {
                count++;
                save = v[1];
                cout<<v[1]<<endl;
                // break;
            }
        }
        if (ha[save] > 0  || count == 0)
        {
            return -1;
        }
        return save;
    }
};