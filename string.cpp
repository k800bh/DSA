#include <iostream>
#include<string.h>
using namespace std;

bool stringcompare(string a,string b){
	if(a.length()!=b.length()){
		return false;
	}
	int j=0;
	for(int i=0;i<a.length();i++){
		if(a[i]!=b[j]){
			i++;
			return false;
		}
		j++;
	}
	
	return true;
}

int main(){
	//string create....
	string str;
	cout<<"Enter the string: ";
	     //Input .....
    //cin>>str;
    getline(cin,str);
    //  In built function of string library.....
    cout<<"Lenght of string: "<<str.length()<<endl;   //lenght of string ....
    cout<<"string is empty: "<<str.empty()<<endl;    //check weather the string is empty or not....
    str.push_back('a');
    cout<<"After push : "<<str<<endl;
    str.pop_back();
    cout<<"After pop : "<<str<<endl;
    cout<<"Substring is: "<<str.substr(0,8)<<endl;    // substring accesses specific elements of the string.....
    
    // usecase of  compare function....(Inbuilt)
    cout<<"Compare between two strings"<<endl;
    string a;
    cout<<"Enter string a: ";
    getline(cin,a);
    string b;
    cout<<"Enter the string b: "; 
    getline(cin,b);
    if(a.compare(b)==0){
    	cout<<"The string is same! "<<endl;
	}
    else{
    	cout<<"The string 'a' and 'b'is not same! "<<endl;
	}
	int ans= stringcompare(a,b);     //compare by user defined function.....
	cout<<"By user defined function "<<ans<<endl;
	                                //find function In-built.....
	string sentence="My name is kaustubh";
	string target="kaustubh";
	cout<<"Target found at index: "<<sentence.find(target)<<endl;
	                                // replace function In-built.....
	string abc="This is first letter";
	string word="second";
	cout<<abc.replace(8,5,word)<<endl;
	cout<<abc.replace(8,6,"third")<<endl;
	                                // erase the element In-built function........
	string alpha="abcdefghijklmnopqrstuvwxyz";
	cout<<alpha.erase(10,10);								                               
    return 0;
	
	
}
