class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int> s;
        int expv=0 , getv=0;
        int n = grid.size();
        int a , b;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                getv +=grid[i][j];
                if(s.find(grid[i][j]) !=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                   
                }
                s.insert(grid[i][j]);
            }
        }
        expv = (n*n) * (n*n+1) /2;
        b=expv + a -getv;
        ans.push_back(b);
        return ans;

        
    }
};