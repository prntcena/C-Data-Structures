class Solution {
public:
    int count_Island(vector<vector<int>>& grid, int row, int col, int& count) {

        int m = grid.size();
        int n = grid[0].size();
        if(row < 0 || col < 0 || row >= m || col >= n || grid[row][col] == 0) {
            return 0;
        }

        // mark grid[i][j] visited as '0'
        grid[row][col] = 0;
        // check for 4 directions-> top, bottom, left, right

        if(count_Island(grid, row-1, col, count)) {         // up
            count++;
        }
        if(count_Island(grid, row+1, col, count)) {         // down
            count++;
        }
        if(count_Island(grid, row, col-1, count)) {         // left
            count++;
        }
        if(count_Island(grid, row, col+1, count)) {         // right
            count++;
        }
        return 1;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        int ans = INT_MIN;
        int count = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    count = 1;
                    count_Island(grid, i, j, count);
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};
