// #include<iostream>
// #include<vector>
// using namespace std;
//vector is the dynamic array

//printing of vector array,inserting,removing
//int main(){
//	vector<int>arr{10,20,30};
//	for(int i=0;i<arr.size();i++){
//		cout<<arr[i]<<endl;
//	}
//	cout<<arr.capacity()<<endl; 
//	cout<<arr.size()<<endl;
//	arr.push_back(3);
//	for(int i=0;i<arr.size();i++){
//		cout<<arr[i]<<endl;
//	}
//	cout<<arr.size()<<endl;
//	arr.pop_back();
//	for(int i=0;i<arr.size();i++){
//		cout<<arr[i]<<endl;
//	}
//	return 0;
//}









//vector size defined by user and initialization
// #include<iostream>
// #include<vector>
// using namespace std;
//int main(){
//	int n;
//	cout<<"enter the size of array"<<endl;
//	cin>>n;
//	vector<int>brr(n,-101);
//	for(int i=0;i<brr.size();i++){
//		cout<<brr[i]<<endl;
//			}	
//}










// //question to find the singal occuring element in the vector...
// //If the array has only one unique element and all others twice, XOR(^) works perfectly...
// #include<iostream>
// #include<vector>
// using namespace std;
// int find_element(vector<int>arr){
// 	int ans=0;
// 	for(int i=0;i<arr.size();i++){
// 		ans=ans^arr[i];//XOR operator..
// 	}
// 	return ans;
// }
// int main(){
// 	int n;
// 	cout<<"enter the size of array";
// 	cin>>n;
// 	vector<int>arr(n);
// 	cout<<"enter the elements";
// 		for(int i=0;i<arr.size();i++){
// 		cin>>arr[i];
// 	}
	
// 	int unique_element=find_element(arr);
// 	cout<<"the unique element is: "<<unique_element;
// 	return 0;
	
// }









//union of two array
// #include<iostream>
// #include<vector>
// using namespace std;
//int main(){
//	int a[]={10,20,30};
//	int b[]={40,50};
//	int sizea=3;
//	int sizeb=2;
//	vector<int>arr;
//	for(int i=0;i<sizea;i++){
//	 arr.push_back(a[i]);
//	}
//	for(int i=0;i<sizeb;i++){
//		arr.push_back(b[i]);
//	}
//	for(int i=0;i<arr.size();i++){
//		cout<<arr[i]<<endl;
//	}
//	return 0;	
//}













//intersection of two vectors
// #include<iostream>
// #include<vector>
// using namespace std;
//int main(){
//	vector<int>arr{2,3,3,4,5,6,7};
//	vector<int>brr{4,7,8,1,2,3,3};
//	vector<int>a;
//	for(int i=0;i<arr.size();i++){
//		int elem=arr[i];
//		for (int j=0;j<brr.size();j++){
//			if(elem==brr[j]){
//				//mark the element
//				brr[j]=-1;
//				a.push_back(elem);
//			}
//		}
//	}
//	for(int i=0;i<a.size(); i++){
//		cout<<a[i]<<endl;
//	}
//	return 0;
//}










//code to sort the 0 & 1 in the vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>arr{0,1,0,1,1,0,1};
	int start=0;
	int end= arr.size()-1;
	int i=0;
	while(i<=end){
		if(arr[i]==0){
			swap(arr[start],arr[i]);
			start++;
			i++;
			}
		else{
			 i++;
		}
	}
	//shotcut of for loop 
	//to print the values inside for loop 
	//auto val is keyword 
	for(auto val: arr){
		cout<<val<<endl;
	}
	return 0;
}
