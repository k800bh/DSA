// // Q. Rat in a maze....
//  #include<iostream>
//  #include<vector>
//  using namespace std;
// bool issafe(int maze[3][3],int i,int j,int row,int col,vector<vector<bool>>&visited){
//     if(((i>=0 && i<row)&&(j>=0 && j<col))&&
//        (maze[i][j]==1)&&
//        (visited[i][j] == false)){
//         return true;

//     }
//     else{

//         return false;
//     }
// }
// void solvemaze( int maze[3][3],int row,int i,int col,int j,vector<vector<bool>>& visited, vector<string>&path, string output){
//     // base case.......
//     if(i==row-1 && j==col-1){
//         path.push_back(output);
//         return;
//     }
//     // case for down --> (i+1,j)...
//     if(issafe(maze,i+1,j,row,col,visited)){
//         visited[i+1][j] = true;
//         solvemaze(maze,row,i+1,col,j,visited,path,output+'D');
//        // backtracking......
//         visited[i+1][j] = false; 
//     } 
//     // case for left --> (i,j-1)...
//     if(issafe(maze,i,j-1,row,col,visited)){
//         visited[i][j-1] = true;
//         solvemaze(maze,row,i,col,j-1,visited,path,output+'L');
//        // backtracking......
//         visited[i][j-1] = false; 
//     }     
//     // case for right --> (i,j+1)... 
//     if(issafe(maze,i,j+1,row,col,visited)){
//         visited[i][j+1] = true;
//         solvemaze(maze,row,i,col,j+1,visited,path,output+'R');
//        // backtracking......
//         visited[i][j+1] = false; 
//     }   
//     // case for up   --> (i-1,j)... 
//     if(issafe(maze,i-1,j,row,col,visited)){
//         visited[i-1][j] = true;
//         solvemaze(maze,row,i-1,col,j,visited,path,output+'U');
//        // backtracking......
//         visited[i-1][j] = false; 
//     }  
     
   

//  }
//  int main(){
//     int maze[3][3]={
//                     {1,0,0},
//                     {1,1,0},
//                     {1,1,1}
//                             };

//     int row=3;
//     int col=3;
//      vector<vector<bool>> visited(row,vector<bool>(col,false));
//      visited[0][0]=true;
//      vector<string>path;
//      string output="";
//      solvemaze(maze,row,0,col,0,visited,path,output);
     
//      cout<<"printing all the ways"<<endl;
   
//       for(auto it: path){
//         cout<<it<<" ";

//     }
//     cout<<" "<<endl;
//      return 0;
// }














//N queen problem --> backtracking......

#include<iostream>
#include<vector>
using namespace std;
void printsol(vector<vector<char>>& board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

//to check the next block is safe....
bool isafe(vector<vector<char>>& board,int n,int col,int row){
       int i=row;
       int j=col;
       //TO check upper left diagonal....
       while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
       }
       //To check for left side...
       i=row;
       j=col;
       while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
       }
       //To check for down left diagonal...
       i=row;
       j=col;
       while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
       }
       //After checking all the block it will return true value....
       
       return true;
}

void solve(vector<vector<char>>& board,int n,int col){
   
   //base case...
    if(col>=n){
        printsol(board,n);
        return;
    }

    // solution for one case..
for(int row=0;row<n;row++){
    if(isafe(board,n,col,row)){
       board[row][col] = 'Q'  ;
       solve(board,n,col+1);
       board[row][col] = '-'  ;
    }

}
}
int main(){
int n=4;
int col=0;
vector<vector<char>>board(n, vector<char>(n,'-'));
solve(board,n,col);
return 0;

}









 
