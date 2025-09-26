#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rows, cols;

    void dfs(int r, int c, vector<vector<int>>& heights, vector<vector<bool>>& ocean, int prevHeight) {
        if (r < 0 || r >= rows || c < 0 || c >= cols || ocean[r][c] || heights[r][c] < prevHeight)
            return;

        ocean[r][c] = true;

        dfs(r + 1, c, heights, ocean, heights[r][c]); // down
        dfs(r - 1, c, heights, ocean, heights[r][c]); // up
        dfs(r, c + 1, heights, ocean, heights[r][c]); // right
        dfs(r, c - 1, heights, ocean, heights[r][c]); // left
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        rows = heights.size();
        cols = heights[0].size();

        vector<vector<bool>> pacific(rows, vector<bool>(cols, false));
        vector<vector<bool>> atlantic(rows, vector<bool>(cols, false));

        for (int i = 0; i < rows; ++i) {
            dfs(i, 0, heights, pacific, heights[i][0]); // Pacific - left column
            dfs(i, cols - 1, heights, atlantic, heights[i][cols - 1]); // Atlantic - right column
        }

        for (int j = 0; j < cols; ++j) {
            dfs(0, j, heights, pacific, heights[0][j]); // Pacific - top row
            dfs(rows - 1, j, heights, atlantic, heights[rows - 1][j]); // Atlantic - bottom row
        }

        vector<vector<int>> result;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (pacific[i][j] && atlantic[i][j]) {
                    result.push_back({i, j});
                }
            }
        }

        return result;
    }
};

// Example usage:
int main() {
    Solution sol;
    vector<vector<int>> heights = {
        {1, 2, 2, 3, 5},
        {3, 2, 3, 4, 4},
        {2, 4, 5, 3, 1},
        {6, 7, 1, 4, 5},
        {5, 1, 1, 2, 4}
    };

    vector<vector<int>> result = sol.pacificAtlantic(heights);
    for (auto& cell : result) {
        cout << "[" << cell[0] << ", " << cell[1] << "]\n";
    }

    return 0;
}