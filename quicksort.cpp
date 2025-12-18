// #include<iostream>
// using namespace std;
//  int partition(int arr[],int s,int e){
   
//     int pivotelement=arr[s];
//     int pivoteindex=s;

//    int count=0;
//    for(int i=s+1;i<=e;i++){
//      if(arr[i]<=pivotelement){
//         count++;
//      }
//    }
//    //jab me loop se bahar aya to mere pas pivote element ki location thi...
//    int rightindex = s+ count;
//     swap(arr[pivoteindex],arr[rightindex]);
//      pivoteindex=rightindex; 

//      //chote elemet left side or bade right side...

//      int i=s;
//      int j=e;

//      while(i<pivoteindex && j>pivoteindex){
//         while(arr[i]<=pivotelement){
//             i++;
//         }
//         while(arr[j]>pivotelement){
//             j--;
//         }
        
//    // 2 cases
//    //1. element is not in proper side
//    //2.if they are on proper side dont swap...
//         if(i<pivotelement && j> pivotelement) // i just checked weather i am not standing on pivote element..
//         swap(arr[i],arr[j]);
        
//      }
//  return pivoteindex;

//  }

//  void quicksort( int arr[],int s,int e){

//     // base case...
//     if(s>=e){
//         return;
//     }
    
//     int p= partition(arr,s,e);

//     //recursive call for right side...
//     quicksort(arr,s,p-1);

//     //recursive call for left side...
//     quicksort(arr,p+1,e);
//  }
// int main(){
//     int arr[]={2,4,6,6,7,9};
//     int n=6;
    
//     int s=0;
//     int e=n-1;
//     quicksort(arr,s,e);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//    return 0;
// }














//2nd solution by lakshyaa bhiya....
//conside last element of array as pivote element.....
//pivote=end ......
#include<iostream>
#include<vector>
using namespace std;
void quicksort(int arr[],int start,int end){
    int pivote=end;
    int i=start-1;
    int j=start;
    //base case
    if(start>=end){
        return;
    }
    //partition algorithm...
    while(j<=pivote){
       if(arr[j] < arr[pivote]){
          i++;
          swap(arr[i],arr[j]);
       }
       j++;
    }
    i++;
    swap(arr[i],arr[pivote]);
    //recursion.....
    quicksort(arr,start,i-1);
    quicksort(arr,i+1,end);
}
int main(){
    int arr[]={7,6,3,4,2,8,1,5};
     cout<<"Main array  : ";
    for(auto it: arr){
        cout<<it<<" ";
        
    }
    cout<<endl;
     int n=8;
    int start =0;
    int end=n-1;
    quicksort(arr,0,end);
    cout<<"Sorted array: ";
    for(auto it: arr){
        cout<< it<<" ";
        
    }

}