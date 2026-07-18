class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<string> st;

        for(int i = 0; i < 9; i++) {

            for(int j = 0; j < 9; j++) {

                char num = board[i][j];

                if(num != '.') {

                    int block = (i / 3) * 3 + (j / 3);

                    if(!st.insert(string(1, num) + "row" + to_string(i)).second ||
                       !st.insert(string(1, num) + "col" + to_string(j)).second ||
                       !st.insert(string(1, num) + "block" + to_string(block)).second)
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};