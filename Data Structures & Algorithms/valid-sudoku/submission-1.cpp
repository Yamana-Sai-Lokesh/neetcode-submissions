class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i =0;i<9;i++){
            vector<int> Vert(9,0);
            vector<int> Horz(9,0);
            for(int j=0;j<9;j++){
                if(board[i][j]!='.')
                {
                    if(Vert[board[i][j]-'0'-1]==0){
                        Vert[board[i][j]-'0'-1]=1;
                    }
                    else{
                        return false;
                    }
                   
                }
                if(board[j][i]!='.')
                {
                     if(Horz[board[j][i]-'0'-1]==0){
                        Horz[board[j][i]-'0'-1]=1;
                    }
                    else{
                        return false;
                    }
                }
                else{continue;}
            }
        }
        for(int square = 0;square<9;square++)
        {
            vector<int> Box(9,0);
            for(int i=0;i<3;i++){
                for(int j = 0;j<3;j++){
                    
                    int row = (square/3)*3+i;
                    int col = (square%3)*3+j;

                    if(board[row][col]!='.'){
                        int val = board[row][col]-'1';
                        if(Box[val]==1)return false;
                        Box[val]=1;
                    }
                }
                // return true;
        }
        // return true;
        
        }
        return true;
        }
};
