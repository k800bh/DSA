#include<iostream>
using namespace std;
//int main(){
//	int arr[]={1,4,3,5};
//	cout <<arr[3]<<endl;
//	for (int i=0 ;i<4;i++){
//		cout<<arr[i]<<endl;
// }
//int arr[4];            //printing of array
// 
//cout<<"enter the value "<<endl;
//for(int i=0;i<4;i++){
//	 cin>>arr[i];
//	 
//}
//for(int i=0;i<4;i++){
//	cout<<arr[i]<<" ";
//}
// int arr[5];             // question.
// cout<<"enter the input"<<endl;
//for(int i=0;i<5;i++){
// 	cin>>arr[i];
// 	
// }
// cout<<"the double value of arry:";
// for(int i=0;i<5;i++){
// 	cout<<2*arr[i]<<" ";
//}
           //changing every element to 1
//int arr[5]={1,2,3,4,5}; 
//for (int i=0;i<5;i++){
//	arr[i]=1;
//	}
//  for (int i=0;i<5;i++){
//cout<<arr[i]<<" ";
//	
//}
          //arrays and function
//	void print_arr(int arr[],int size){
//	
//	 for(int i=0;i<size;i++){
//		cout<<arr[i]<<" "; 
//	}
//	cout<<endl;
//    }
//	void inc(int arr[],int size){
//		arr[0]=arr[0]+10;
//		arr[3]=arr[3]+10;
//		print_arr(arr,size);
//	}
//	int main(){
//	
//	int arr[]={5,6,4,5};
//	int size=4;
//	inc(arr,size);
//	print_arr(arr,size);
   
                  //linear search in array
    
bool find(int arr[],int size,int n){
	for(int i=0;i<size;i++){
		if(arr[i]==n){
			return true;
		}
	}
		return false;
}
		
	
	
int main(){
	int arr[6]={2,4,5,6,9,8};
	int size=6;
	cout<<"enter the element to find on array:"<<endl;
	int n;
	cin>>n;
	if (find(arr,size,n)){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	return 0;		
}
 
 

