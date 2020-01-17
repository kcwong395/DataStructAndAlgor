class Solution {
public:
	int sum(vector<vector<int>>& grid, int row, int col) {
		// reach the end
		if (row == grid.size() - 1 && col == grid[row].size() - 1) {
			return grid[row][col];
		}
		// reach the bottom row
		if (row >= grid.size() - 1 && col < grid[row].size() - 1) {
			return grid[row][col] + sum(grid, row, col + 1);
		}
		// reach the rightmost column
		else if (row < grid.size() - 1 && col >= grid[row].size() - 1) {
			return grid[row][col] + sum(grid, row + 1, col);
		}
		else {
			return grid[row][col] + min(sum(grid, row + 1, col), sum(grid, row, col + 1));
		}
	}

	int minPathSum(vector<vector<int>>& grid) {
        
        if(grid.size() == 0 || grid[0].size() == 0) return 0;
        
		return sum(grid, 0, 0);
	}
};