
    void bfs(vector<vector<char>>& grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j] == '0') return;

        grid[i][j] = '0';
        bfs(grid, i, j+1);
        bfs(grid, i, j-1);
        bfs(grid, i-1, j);
        bfs(grid, i+1, j);
    }


    int numIslands(vector<vector<char>>& grid) {
        int count = 0;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    count++;
                    bfs(grid, i, j);
                }
            }
        }

        return count;
    }

