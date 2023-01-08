class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        int ans = 0;
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                if(board[i][j]=='X'){
                    if(i == 0 && j == 0)ans++;
                    else if(i == 0){
                        if(board[i][j-1]!='X')ans++;
                    }else if(j == 0){
                        if(board[i-1][j]!='X')ans++;
                    }else{
                        if(board[i-1][j]!='X' && board[i][j-1]!='X')ans++;
                    }
                }
                
            }
        }

        return ans;
    }
};
