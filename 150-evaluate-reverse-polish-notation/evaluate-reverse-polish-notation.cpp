class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stack;
        vector<int> vec;
       for (int i  = tokens.size() - 1 ; i >= 0;i--)
            stack.push(tokens[i]);
        while  (!stack.empty())
        {
            string str = stack.top();
            stack.pop();
            cout<<str<<endl;
            if (str != "+" && str != "-" && str != "/" && str != "*")
                vec.push_back(stoi(str));
            else if (vec.size() >= 2 && str ==  "+")
            {
                vec[vec.size() - 2] = vec[vec.size() - 2]  + vec[vec.size() - 1];
                vec.erase(vec.begin() + vec.size() - 1);
            }
             else if (vec.size() >= 2 && str ==  "-")
            {
                vec[vec.size() - 2] = vec[vec.size() - 2]  - vec[vec.size() - 1];
                vec.erase(vec.begin() + vec.size() - 1);
            }
             else if (vec.size() >= 2 && str ==  "/")
            {
                vec[vec.size() - 2] = vec[vec.size() - 2]  / vec[vec.size() - 1];
                vec.erase(vec.begin() + vec.size() - 1);
            } else if (vec.size() >= 2 && str ==  "*")
            {
                vec[vec.size() - 2] = vec[vec.size() - 2]  * vec[vec.size() - 1];
                vec.erase(vec.begin() + vec.size() - 1);
            }
        }
        // for (int i = 0; i < vec.size();i++)
        //     cout<<vec[i]<<endl;
        return vec[0];
    }
};
