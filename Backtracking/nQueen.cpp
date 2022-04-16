#include<iostream>
using namespace std;

bool isValid(int** arr,int x,int y,int n){// checks if the position is valid to place queen

    for(int row=0; row <x; row++){//checks of any other queen is in same column 
        if(arr[row][y] == 1){
            return false;
        }
    }

    int row = x;
    int col = y;

    while(row>= 0 && col>=0){//checks if there is queen in up-left diagonal
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;

    while(row>= 0 && col<n){//checks if another queen is in up-right diagonal
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col++;
    }

    return true;//return true if none of above condition is false
}

bool nQueen(int**  arr, int x, int n){//function that places queen in correct place and backtracks if necessary

    if(x>=n){// return true if we can place all queens till end of rows
        return true;
    }

    for(int col = 0; col<n; col++){// place queen in any column of row where its valid
        if(isValid(arr,x,col,n)){
            arr[x][col] = 1;

            if(nQueen(arr,x+1,n)){// recursive call for next row(queen) : next mean all remaining 
                return true;
            }

            arr[x][col] =0; //backtracking if we are unable to place queen in next row 
            
        }
    }

    return false;// yo false kunai row ma place vaira xaina ie cols sakew bhane aaux
}

int main()
{
    int n;
    cin>>n;

    int** arr = new int*[n];// pointer to pointers of row

    for(int i=0; i<n; i++){// memory to row pointers
        arr[i] = new int [n];
        for(int j=0; j<n; j++){// initialize 2d array
            arr[i][j] =0;
        }
    }


    if(nQueen(arr,0,n)){
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cout<< arr[i][j];
        }
        cout<<endl;
    }        
    }


    return 0;
}