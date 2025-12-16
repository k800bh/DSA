
//RECURSION WORKS LIKE STACK(STACK)........
// PATTERN 1: patterns inclusion exclusion...
// PATTERN 2: for loop se function call karo...(coin problem)....
    



//Factorial using recursive function....

// #include<iostream>
// using namespace std;

// int factorial(int n){
//  cout<<"function is call for: "<<n<<endl;
// //base case...(mandatory)
// if(n==1)
// return 1;
// int chotiproblem=factorial(n-1);
// int badiproblem= n * chotiproblem ;
// return badiproblem;
// }

// int main(){
//    int n;
//    cout<<"Enter the value of n :"<<endl;
//    cin>>n;
//    int ans=factorial(n);
//    cout<<"Ans is: "<<ans<<endl;
//    return 0;   
// }







// //Counting......

// //  What Happens When You Enter n = 5
// // print_counting(5) calls print_counting(4)

// // print_counting(4) calls print_counting(3)

// // print_counting(3) calls print_counting(2)

// // print_counting(2) calls print_counting(1)

// // print_counting(1) calls print_counting(0)

// // print_counting(0) hits the base case and returns

// #include<iostream>
// using namespace std;
// int print_counting(int n){
//     //base case....
//     if(n==0)
//     return 0;

//     //processing 1....
//    // cout<<n<<" ";   //reverse counting....
 
//     //recursion....
//     print_counting(n-1);

//     //processing 2....
//     cout<<" "<<n;    // Linear counting....
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     print_counting(n);
//      return 0;
// }



//Fibonacci series.....

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==1)
//     return 0;
//     if(n==2)
//     return 1;
//     int ans=fib(n-1)+fib(n-2);
//     return ans;
// }

// int main(){
//    int n;
//    cout<<"Enter the value of n: ";
//    cin>> n;
//    int ans=fib(n);
//    cout<<"The n th term is: "<<ans<<endl;
//    return 0;  
// } 

//   Magical line!!!!!
//**** Ek case solve karo...... 
//baki recursion sambhal lega bhai****.....









 
// Q.print array using recursive function...
// #include<iostream>
//  using namespace std;
//  void print(int arr[],int n,int i){
//     //base case
//      if(i>=n){
//         return;
//      }
//      cout<<arr[i]<<" ";
//      //baki recursion sambhelega...
//      print(arr,n,i+1);
//  }
//  int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int i=0;
//     print(arr,n,i);
//     return 0;
//  } 





 //Q. To print the maximum number in the array..
//  #include<iostream>
//  #include<limits.h>
//  using namespace std;
//   void findmax(int arr[],int n,int i,int& maxval){
//     //base case..
//      if(i>=n){
//         return;
//      }
//         // to solve first case 
//         //current element ko check karo for max
//         if(arr[i]>maxval){
//             maxval=arr[i];
//         }
//         //baki recursion
//         findmax(arr,n,i+1,maxval);
//     }
//  int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=7;
//     int i=0;
//     int maxval=INT_MIN;
//     findmax(arr,n,i,maxval);
//     cout<<"maximum no is: "<<maxval<<endl;
//     return 0;
//  }






//Q.finding key inside string..
// #include<iostream>
// #include<string>
// using namespace std;
// int checkkey(string str,int i,int n,char key){
//     //base case...
//     if(i>=n){
//         return -1;
//     }
//     //1 case solve..
//     if(str[i]==key){
//         return i ;
//     }
//     //recursion...
//    return checkkey(str,i+1,n,key);
// }
// int main(){
//     string str ="kaustubh";
//     int i=0;
//     int n=str.length();
//     char key='u';
//     int ans=checkkey(str,i,n,key);
//     cout<<"The answer is at index: "<<ans<<endl;
//     return 0;
// }








//Printing the reverse number....
// #include<iostream>
// using namespace std;
// void printnum(int n){
//     //base case..
//     if(n==0){
//         return ;
//     }
//     //1 case solve....
//     int digit =n % 10;
//     cout<<digit<<" ";
//     //recursion.....
//     printnum(n/10);
// }
// int main(){
//     int n=647;
//     cout<<"The reverse number is: ";
//     printnum(n);
//     return 0;
// }










// /*Q.To check weather the array is
// sorted or not using recursion......*/

// #include<iostream>
// #include<vector>
// using namespace std;

// /* Here we used pass by reference(&)to save
// time and space complexity(because we avoid making
// of duplicate and copies of variable)*/
// bool checksort(vector<int>&arr,int& n,int i){
// //base case
//  if(i==n-1){
//         return true;
//     }
//     // 1 case solve
//     if(arr[i+1]<arr[i]){
//         return false;
//     }
//     //baki recursion bhencho..
//     return checksort(arr,n,i+1);
// }

// int main(){
//     vector<int>v{10,20,30,40,50,60};
//     int n=v.size();
//     int i=0;
//     bool issorted=checksort(v,n,i);
//     if(issorted){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is unsorted"<<endl;
//     }
//     return 0;
// } 











 
//Binary search using recursion...

//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  int binarysearch(vector<int>&v,int s,int e,int &target){
//     //base case 1..... 
//     if(s>e)
//     return -1;
//      int mid=(s+e)/2;
//     //case 1....
//     if(v[mid]==target)
//     return mid;
//     //case 2 + recursion....
//     if(v[mid]<target){
//         return binarysearch(v,mid+1,e,target);
//     }
//     else{
//         return binarysearch(v,s,mid-1,target);
//     }   
//  }
//  int main(){
//     vector<int>v{10,20,30,40,50,60};
//     int target=40;
//     int n=v.size();
//     int s=0;
//     int e=n-1;
//     int ans=binarysearch(v,s,e,target);
//     cout<<"answer is "<<ans<<endl;
//     return 0;
//  }










//Printing all subsequences....
// #include<iostream>
// #include<vector>
// using namespace std;
// void printsubsequence(vector<string>&v,string str,string output,int i,int &n){
//    //base case....
//    if(i==n){ 
//     v.push_back(output);
//     return;
//     }
//     //exclude....
//     printsubsequence(v,str,output,i+1,n);
//     //include....
//     printsubsequence(v,str,output+str[i],i+1,n);
// }
// int main(){
//     string str="abc";
//     string output="";
//     int i=0;
//     int n=str.length();
//     vector<string>v;
//     printsubsequence(v,str,output,i,n);
//     cout<<"Printing all subsequences"<<endl;
//     for(auto val:v){
//         cout<<val<<" ";
//     }
//     return 0;
// }









/*This code solves:
“Minimum number of coins/steps to make a target sum using given values with unlimited usage.”

Possible combinations to reach 4:

1+1+1+1 → 4 elements

1+3 → 2 elements  (minimum)

2+2 → 2 elements 

2+1+1 → 3 elements

So the answer should be: 2 (fewest number of elements).
*/
// #include<iostream>
// #include<vector>
// #include <climits>
// using namespace std;
// int solve(vector<int>arr,int target){
//     //base case
//     if(target==0){
        
//         return 0;

//     }
//     if(target<0){
//         return INT_MAX;
//     }
//     //1 case
//     int mini=INT_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans=solve(arr,target-arr[i]);
//        // cout<<"adefgheg"<<ans<<endl;
//         if(ans!=INT_MAX){
//         mini=min(mini,ans+1);
//         cout<<"mini:"<<mini<<endl;//... samajla nahi tar comment kad
//         }
         
//     }
//     return mini;
// }
// int main(){
//     vector<int>arr{2,1,3,5};
//     int target=4;
//     int ans=solve(arr,target);
//     cout<<"answer:"<<ans<<endl;
//     return 0;
// }











// // DSA PATTERN : 2. 
// //cut the rod to get maximum segments of the rod...
//             //DIAGRAM..
// //    ....             ..............
// // x(1 segmemnt)        n-x(ans1)
//  #include<iostream>
//  #include<limits.h>
//  using namespace std;
//  int solve(int n,int x,int y,int z){
//     if(n==0)
//     return 0;
//     if(n<0)
//     return INT_MIN;

//     int ans1=solve(n-x,x,y,z)+1;
//     int ans2=solve(n-y,x,y,z)+1;
//     int ans3=solve(n-z,x,y,z)+1;


//     int ans=max(ans1,max(ans2,ans3));
//     return ans;
// }
//  int main(){
//     int n=7; 
//     int x=5;
//     int y=2;
//     int z=2;
//     int ans = solve(n,x,y,z);
//     if(ans<0){
//         return 0;
//     }  
    
//     cout<<"ANSWER : "<<ans;
//     return 0;
//  }












// DSA PATTERN 1: INCLUSION AND EXCLUSION......
//PROBLEM: Return the maximum sum excluding the adjacent element from the array....
//House Robber.....
#include<iostream>
 #include<vector>
 #include<limits.h>
 using namespace std;
 void solve (vector<int>&arr,int &maxi,int i,int sum){
//base case
if(i >= arr.size()){
    maxi=max(sum,maxi);
    return;
}
//inclusion
solve(arr,maxi,i+2,sum+arr[i]);

//exclusion
 solve(arr,maxi,i+1,sum);

}
 int main(){
    int i=0;
    int sum=0;
    vector<int>arr{6,3,4,5};
    int maxi= INT_MIN;
    solve(arr,maxi,i,sum);
    cout<<maxi;
    return 0;
 }

 