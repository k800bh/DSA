#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int target){
	 int start=0;
	 int end=size-1;
	 int mid=(start+end)/2;
	 
	 while(start<=end){
	 	
	 int element=arr[mid];
	 	if(element==target){
	 	return mid;
	 }
	 else if(element<target){
	 	start=mid+1;
	 }
	 else if(element>target){
	 	end=mid-1;
	 }
	 mid=(start+end)/2;
	 }
	 
	 //if element is not found.....
	return -1; 
}
int main(){
	int arr[]={2,4,6,8,10,12,14};
	int target;
	int size=7;
	 for(auto val: arr){
		cout<<val<<" ";
	 }
	cout<<endl;
	cout<<"Enter the target value: ";
	cin>>target;
	
	int targetvalue=binarysearch(arr,size,target);
	if(targetvalue==-1){
		cout<<"Target not found! "<<endl;
	}
	else{
		cout<<"Target found at index: "<<targetvalue<<endl;
	}
	return 0;
}


//binary search using inbuilt function......

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//	int a[]={1,2,3,4,5,6,7};
//	int size=7;
//if(binary_search(a,a+size,5)){
//	cout<<"element found";
//}
//else{
//
//cout<<"element not found";
//}
//return 0;
//}


// Q1 . find the first occurance...

//#include<iostream>
//#include<vector>
//using namespace std;

//int firstocc(vector<int> arr,int target){
//	int start=0;
//	int end=arr.size()-1;
//	int mid=(start+end)/2;
//	int ans=-1;
//	while(start<=end){
//		if(arr[mid]==target){
//			ans=mid;
//			end=mid-1;
//		}
//		else if(arr[mid]>target){
//			end=mid-1;
//			
//		}
//		else if(arr[mid]<target){
//			start=mid+1;
//		}
//		mid=(start+end)/2;
//	}
//	return ans;
//}
//int main(){
//	vector<int>arr{1,2,3,4,4,4,4,5,6};
//	int target;
//	cout<<"Enter the targeted element: ";
//	cin>>target;
//	int ans=firstocc(arr,target);
//	cout<<"The first occurance of the element is at index: "<<ans;
//	return 0;
//}


//exponential search in binary search: .........

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int bs(int a[], int start, int end,int target){
//	int mid=(start+end)/2;
//    while(start<=end){
//    	if(a[mid]==target){
//    		return mid;
//		}
//		else if(a[mid]<target){
//			start=mid+1;
//		}
//		else{
//			end=mid-1;
//		}
//		mid=(start+end)/2;
//	}
// return -1;
//}
// 
// int expsearch(int a[],int n,int target){
//	if(a[0]==target){
//		return 0;
//	}
//	int i=1;
//	while(i<n && a[i]<=target){
//		i=i*2;
//	}
//	return bs(a, i / 2, min(i, n - 1), target);
//}
// 
//
//int main(){
//	int a[]={1,2,3,4,5,6,7,8};
//	int target=4;
//	int n=sizeof(a)/sizeof(int);
//	int ans=expsearch(a,n,target);
//	cout<< "Target is at index: "<<ans;
//	return 0;
//}
