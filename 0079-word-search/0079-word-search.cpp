class Solution {
public:
    bool helper(vector<vector<char>>& board, string word, int i, int j, int index){
        if(word.size() == index){
            return true; ////word found
        }

        if(i<0 || j<0){
            return false;
        }
        if(i>= board.size() || j>= board[0].size()){
            return false;
        }
        if(word[index] != board[i][j]){
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#';

        
      bool found =  helper(board, word, i+1, j, index+1) || //niche
       helper(board, word, i-1, j, index+1)|| //upr
       helper(board, word, i, j+1, index+1)|| //aage
       helper(board, word, i, j-1, index+1); //piche

       board[i][j] = temp;
       return found;

    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(helper(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};