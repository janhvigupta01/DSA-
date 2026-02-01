class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int maxcount = 0;
        int index = 0;

        for (int i = 0; i < n; i++) {
            int countone = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1)
                    countone++;
            }

            if (countone > maxcount) {
                maxcount = countone;
                index = i;
            }
        }

        return {index, maxcount};
    }
};
