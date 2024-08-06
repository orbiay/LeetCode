class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> boxes(9);
        int n =  board.size();
        for (int i = 0;i < n ;i++)
        {
            for (int j = 0; j < n ; j++)
            {
                if (board[i][j] == '.') continue;
                int calculation = (i / 3) * 3 + (j / 3);
                if (cols[j].count(board[i][j]) || rows[i].count(board[i][j]) || boxes[calculation].count(board[i][j]))
                    return false;
                cols[j].insert(board[i][j]);
                rows[i].insert(board[i][j]);
                boxes[calculation].insert(board[i][j]);
            }
        }

        return true;
    }
};
