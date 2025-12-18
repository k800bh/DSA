#include<iostream>
using namespace std;
void merge(int*arr,int s,int e){
    int mid=(s+e)/2;

    //creating lenght of left and right array...
    int len1=mid-s+1;
    int len2=e-mid;

    //creating temp left and right array...
    int* left=new int [len1];
    int* right=new int [len2];
    
    //copy values...
    int k=s;
    for(int i=0;i<=len1;i++){
        left[i]=arr[k];
        k++;
    }

    k=mid+1;
    for(int i=0;i<=len1;i++){
        right[i]=arr[k];
        k++;
    }

    //merge karo bancho...

    int leftindex=0;
    int rightindex=0;
    int mainarray=s;
    //dono bhi array khatam hue....to...
    while(leftindex<len1 && rightindex<len2){
        if(left[leftindex]<right[rightindex]){
            arr[mainarray++]=left[leftindex++];
        }
        else{
          arr[mainarray++]=right[rightindex++];  
        }
    }
    
      /*    fakt ek array sampla...tar...
           (urlele element direct takun de)   */
    
    //copy logic for left array...
    while(leftindex<len1){
      arr[mainarray++]=left[leftindex++];
    }
   //copy logic for right array...
   while(rightindex<len2){
    arr[mainarray++]=right[rightindex++];
   }

    //Todo: delete the temp array made... 


}
void mergesort(int *arr,int s,int e){
    
//base case...
    if(s>=e) return;

    //one case solution...
   int mid=(s+e)/2;
   //left part ko sort karo...
   mergesort(arr,s,mid);

   //right part ko sort karo...
   mergesort(arr,mid+1,e);

   //mege karo...
   merge(arr,s,e);
}
int main (){
    int arr[]={6,5,7,4,8,2,9}; 
    int n=7;
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     return 0;

 }