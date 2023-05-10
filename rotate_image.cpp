class Solution {
public:

    void rotate(vector<vector<int>>& mat) {
        
        int n = mat.size();
        if (n == 0) return ;

        int m = mat[0].size();
        if (n != m) return ;

        for (int i = 0; i < n/2; i++)
            for (int j = 0; j < (m+1)/2; j++) {
                int val = mat[i][j];

                pair<int, int> pos = {i, j}, pre_pos;

                for (int k = 1; k <= 3; k++) {
                    pre_pos = {n - pos.second - 1, pos.first};
                    mat[pos.first][pos.second] = mat[pre_pos.first][pre_pos.second];

                    pos = pre_pos;
                }

                mat[pos.first][pos.second] = val;
            }
        

    }
};