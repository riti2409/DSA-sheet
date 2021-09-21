class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set <int> a;
    set <int> b;
    
    int i, j, row = matrix.size( ), col = matrix[0].size( );
    
    for( i = 0; i < row; i++){
        
        for(j = 0; j < col; j++){
            
            if(matrix[i][j] == 0){
                
                a.insert(i);
                b.insert(j);
            }   
            
        }
    }
    
    for(auto it : a){
        
        for(i = 0; i < col; i++){
            
            matrix[it][i] = 0;
        }
    }
    
     for(auto it : b){
        
        for(i = 0; i < row; i++){
            
            matrix[i][it] = 0;
        }
    }
    
}
};