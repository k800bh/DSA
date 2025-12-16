#include<iostream>
using namespace std;

int main(){
	
	int a=5;
	cout << &a << endl ; // address of varible.....
	int *ptr = &a ; //creating pointer.....
	cout << "Deferance operator(*ptr): "<< *ptr << endl ; //accessing pointers.....
	cout <<"Printing only (ptr): "<< ptr << endl; //   ptr = &a......
	cout <<"Printing the address of ptr(&ptr): "<< &ptr << endl ;
	int* pt = 0; //  Null pointer.......
	//cout<<"The null pointer value: "<< *pt<< endl ;// I cant print after printing the null pointer
	int b=6;
	int *p=&b;
	// copy pointer.......
	int *q=p;
	cout<<"*p: "<<*p<<endl;
	cout<<"*q: "<<*q<<endl;
	return 0;

}


////Implementing the pointers on array........
//#include<iostream>
//using namespace std;
//int main(){
//    int arr[6]={12,2,3,4,5,6};
//    cout<<arr<<endl; //same value..
//	cout<<&arr<<endl; //same value..
//    cout<<&arr[0]<<endl; //same value..
//    cout<<&arr[1]<<endl;
//    int*p= arr;  //&arr=arr.....
//    cout<<p<<endl;
//    cout<<&p<<endl;
//	cout<<*p<<endl; //*p=arr[0].....
//	cout<<*arr<<endl; //*arr=arr[0]...
//	
//	int i=0;
//	cout<<arr[i]<<endl;//same ans...
//	cout<<i[arr]<<endl;//same ans...
//	
//	
//    return 0;
//		 
//}


//Implementing the pointers on character array........ 
// #include<iostream>
// using namespace std;
// int main(){
// 	char c[10]="kaustubh";
// 	char *ch =c;   //ch=&c...
// 	cout<<c<<endl; //Expected ans is address of c but it print string(kaustubh)...
// 	cout<<&c<<endl; //address
// 	cout<<*ch<<endl;// k
// 	cout<<ch<<endl;//kaustubh
// 	cout<<ch+2<<endl; //sub char array get created(ustubh)......
// 	return 0;
	
// }


//functions with pointers......
//  #include<iostream>
//  using namespace std;
//  void solve( int a[])//in this function, array is passed by reference,hence it is passed in the form of pointer......
//  {
//  	cout<<"size inside solve function: "<<sizeof(a)<<endl;
//  }
//  int main(){
//  	int a[]={1,2,3,4};
//  	cout<<"size inside main function: "<<sizeof(a)<<endl;
//  	solve(a);
//  	return 0;
//  }


//Multiple leval pointer....
// #include<iostream>
// using namespace std;
// int main(){
//  int a=5;
//  int *p = &a;
//  int **q = &p;

//  cout<<a<<endl;
//  cout<<&a<<endl;
//  cout<<p<<endl;
//  cout<<&p<<endl;
//  cout<<*p<<endl;
//  cout<<q<<endl;
//  cout<<&q<<endl;
//  cout<<*q<<endl;
//  cout<<**q<<endl;
//  return 0;

// }

// #include<iostream>
// using namespace std;
// void util( int* p) //pass by value.....
// {
// 	  p=p+1;
// }
// int main()
// {
//   int a=5;
//   int *p=&a;
// cout<<"before"<<endl;
// cout<<a<<endl;
//   cout<<p<<endl;
//   cout<<*p<<endl;

//  util(p);
//  cout<<"after"<<endl;
//   cout<<a<<endl;
//   cout<<p<<endl;
//   cout<<*p<<endl;
//   return 0;	
// }

//Try and run .....
// #include<iostream>
// using namespace std;
// void util( int* p) //pass by value.....
// {
// 	  *p=*p+1;
// }
// int main()
// {
//   int a=5;
//   int *p=&a;
// cout<<"before"<<endl;
// cout<<a<<endl;
//   cout<<p<<endl;
//   cout<<*p<<endl;

//  util(p);
//  cout<<"after"<<endl;
//   cout<<a<<endl;
//   cout<<p<<endl;
//   cout<<*p<<endl;
//   return 0;	
// }
 

//  //Referance variable...
//  #include<iostream>
//  using namespace std;
//  int main(){
//   int a=5;
//   int &b=a;
//   cout<<a<<endl;
//   cout<<b<<endl;
//   a++;
//   cout<<a<<"\n"<<b;
//   return 0;
//  }

//famous question
// #include<iostream>
// int*solve(){
//     int a=5;
//     int* ans= &a;
//     return ans;
// }
// int main(){
//     *solve(a);
// } 

