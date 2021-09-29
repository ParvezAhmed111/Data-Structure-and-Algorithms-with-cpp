#include<iostream>
using namespace std;

//to check if we can go to a particular position
bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **solArr){

    //base condition
    if (x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }

    //check if x, y position is safe or not
    if (isSafe(arr, x,y,n)){
        solArr[x][y]=1;

        if(ratinMaze(arr, x+1, y,n,solArr)){
            return true;
        }
        if(ratinMaze(arr, x, y+1, n, solArr)){
            return true;
        }

        solArr[x][y]=0; //backtracking
        return false;
    }
    return false;
}

int main(){

    int n; 
    cin>>n;
    
    //initializing array
    int **arr=new int *[n];

    //dynamically allocating memory of array
    for(int i=0; i<n; i++){
        arr[i]= new int[n];
    }

    //taking input in array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //initializing solution array
    int **solArr=new int *[n];
    //dynamically allocating memory of solution array
    for(int i=0; i<n; i++){
        solArr[i]= new int[n];
        //initializing solution array to zero
        for (int j=0; j<n; j++){
            solArr[i][j]=0;
        }
    }

    if (ratinMaze(arr, 0, 0, n, solArr)){
        //printing solution array
        for(int i=0; i<n; i++){ 
            for(int j=0; j<n; j++){
               cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}


// 5
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1
