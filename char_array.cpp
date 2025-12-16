// #include<iostream>
// #include<string.h>
// using namespace std;

// int getlenght(char name[]){
// 	int lenght=0;
// 	int i=0;
// 	while(name[i] !='\0'){
// 		lenght++;
// 		i++;
// 	}
// 	return lenght;
// }

// void revchararray(char name[]){
	  
// 	  int i=0;
// 	  int n=getlenght(name);
// 	  int j=n-1;
// 	  while(i<=j){
// 	  	swap(name[i],name[j]);
// 	  	i++;
// 	  	j--;
// 	  }
// }
// void replacespaces(char name[]){
// 	int i=0;
// 	int n=strlen(name);
// 	for(int i=0;i<n;i++){
// 	  if(name[i]==' '){
// 		name[i]='@';
// 	}
// 	}
// }

// int main(){
// 	char name[100];   //declaration of character array....
// 	cout<<"Enter your name: ";
// 	//cin>>name;
// 	cin.getline(name,99);     //using this to avoid the errors causes due to space...
// 	cout<<"Your name is: "<<name<<endl;
//     cout<<"Lenght is: "<<getlenght(name)<<endl;   //printing the lenght of the array...
//     replacespaces(name);
//     cout<<"The edited name is: "<<name<<endl; //  space is replaced  with @ symbol...
//     revchararray(name);
//     cout<<"Reverse of the character array is : "<<name<<endl;  //reverse the characters...
    
//     return 0;	
// }



// Q.1 palindrome

#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(char name[]){
	int i=0;
	int n = strlen(name);
	int j=n-1;
	while(i<=j){
		if(name[i]!=name[j]){
			return false;
		 }
		 else{
		 	i++;
		 	j--;
		 }
	 }
	 return true;
}
int main(){
	char name[100];
	cout<<"Enter the word for which you want to check the palindrome: "<<endl;
	cin.getline(name,100);
	cout<<"Name : "<<name<<endl;
	cout<<" Palindrom check : "<<palindrome(name)<<endl;
	if(palindrome){
		cout<<"name is palindrome";

	}
	else{
		cout<<"name is not palindrome";
	}
	return 0;
	
}
