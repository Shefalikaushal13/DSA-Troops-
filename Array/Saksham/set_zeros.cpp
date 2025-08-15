
//brute-force O(m*n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(); 
        int columns = matrix[0].size();

        vector<vector<int>> helper= matrix;
        //set according to initial state 

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                if(matrix[i][j]==0)
                {
                    //ek zero mil gya corresponding row and column set to 0 
                    //changing row
                    for(int k=0;k<columns;k++)
                    {
                        helper[i][k]=0;
                    }
                    //changing the column 
                    for(int k=0;k<rows;k++)
                    {
                        helper[k][j]=0;
                    }
                }

            }
        }
        matrix= helper;
        
        
    }
};


//brute force: O(m+n) space 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(); 
        int columns = matrix[0].size();

        vector<bool> row(rows,false); 
        vector<bool> col(columns,false);

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
               if(matrix[i][j]==0)
               {
                    // make that row and column zero , mark them true 
                    row[i]=true; 
                    col[j]=true;
               }

            }
        }

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
               if(row[i]||col[j])
               {
                    matrix[i][j]=0;
               }

            }
        }

    }
};


//optimal solution : no extra space 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(); 
        int columns = matrix[0].size();

        bool first_row_zero = false;
        bool first_col_zero = false;

        //Check if first row has a zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                first_row_zero = true;
                break;
            }
        }

        //Check if first column has a zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                first_col_zero = true;
                break;
            }
        }
        // make the whole row and column zero in last to preserve the matrix 

        // Use first row-col as markers for the rest of the matrix
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // mark this row
                    matrix[0][j] = 0; // mark this column
                }
            }
        }

        //mark zeros on the basis if any of the base row or colum is 0

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        // zero the first row if needed
        if (firstRowZero) {
            for (int j = 0; j < n; j++) matrix[0][j] = 0;
        }

        // zero the first column if needed
        if (firstColZero) {
            for (int i = 0; i < m; i++) matrix[i][0] = 0;
        
        
    }
};