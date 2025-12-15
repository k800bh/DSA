// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;
//creation of 2D array and initialization
//int main(){
//	int arr[3][4];
//	int brr[2][3]={{2,3,4},{5,6,7}};
//row wise printing of the array
//cout<<"row wise printing"<<endl;
//for(int i=0;i<2;i++){
//	for(int j=0;j<3;j++){
//		cout<<brr[i][j]<<" ";
//	}
//	cout<<endl;
//}
////column wise printing of array
//cout<<"column wise printing"<<endl;
//for(int i=0;i<3;i++){
//	for(int j=0;j<2;j++){
//		cout<<brr[j][i]<<" ";
//	}
//	cout<<endl;
//}
//	return 0;
//}










//operations on 2D arrays.........
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void printrowwisesum(int arr[3][4], int rows, int cols){
	for(int i=0;i<rows;i++){
		int sum=0; 
		for(int j=0;j<cols;j++){
			sum=sum+arr[i][j];
		}
		cout<<sum<<endl;
		}
}
int findmin(int arr[3][4],int rows,int cols ){
	int min=INT_MAX;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(arr[i][j] < min){
				min=arr[i][j];
			}
		}
	}
	return min;
}
int findmax(int arr[3][4],int rows,int cols){
	int max=INT_MIN;
	for(int i=0;i<rows;i++){
		for(int j=0; j<cols;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	return max;
}
bool findkey(int arr[3][4],int rows,int cols,int key){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(key==arr[i][j]){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int arr[3][4];
	int rows=3;
	int cols=4;
	int key;
	//taking input 
	cout<<"Enter the 2D array of 3 Rows and 4 columns: "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Printing array row wise"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"printing array column wise"<<endl;
	for(int i=0;i<cols;i++){
		for(int j=0;j<rows;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	cout<<"The row wise sum: "<<endl;
	printrowwisesum(arr,rows,cols);
	cout<<"Minimum value: "<<findmin(arr,rows,cols)<<endl;
	cout<<"Maximum value: "<<findmax(arr,rows,cols)<<endl;
	cout<<"Enter the key you want to check: ";
	cin>>key;
	cout<<findkey(arr,rows,cols,key)<<endl;
	cout<<"0 means element not found!"<<endl;
	cout<<"1 means element is found!"<<endl;
	return 0;
}














 
//// initialization of 2D array using vector.......

//// method 1.......
// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;
//int main(){
//	vector<vector<int> >arr;
//	vector<int>a{1,2,3,4};
//	vector<int>b{3,4,5,6};
//	vector<int>c{5,6,7,8};
//	arr.push_back(a);
//	arr.push_back(b);
//	arr.push_back(c);
//	for(int i=0;i<arr.size();i++){
//		for(int j=0;j<arr[i].size();j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}


////method 2.....
// #include<iostream>
// #include<limits.h>
// #include<vector>
// using namespace std;
//int main(){
//	vector<vector<int> > arr(3, vector<int>(5, 101));
//	for(int i=0;i<arr.size();i++){
//		for(int j=0;j<arr[i].size();j++){
//		cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	return 0;
//}


