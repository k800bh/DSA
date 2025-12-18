// #include<iostream>
// using namespace std;

// //creation of the class..... 
// class Animal{
// //accessifier.....(perfect encapsulaction: when all the data members are private.)
// private:
// int weight ;
// public:

// //state of object(variable)......

// int a;
// string name="kaustubh";

// //behavoir of the class...(functions)

// void display(int a){
//     cout<<"the  age is: "<<a<<endl;
//     cout<<"the name is: "<<name<<endl;
// }
// // process to acesss the private member of the class(getter and setter method)......
// int getweight(){
//     return  weight;
// }
// void setweight(int  w ){
//     weight=w;
// }
// };

// int main(){
// //creation of object....
// Animal dada;

// //calling function with the help of object of class
// dada.display(5);
// dada.setweight(80);
// cout<<"weight is: "<<dada.getweight()<<endl;

// //accessing the data of the class inside main function .....
// dada.name="lavdya";
// dada.display(5);
// return 0;
// }





// //INHERITANCE + ENCAPUSLATION....
// #include<iostream>
// using namespace std;
// //creating parent class...
// class Animal{
//   public:
//   int age;
//   int weight;
//   void eat(){
//     cout<<"eating"<<endl;
//   }
// };

// //creating child class.....
// class Dog:public Animal{
//     //empty.....
//     void sound(){
//       cout<<"bark";
//     }
// };
// int main(){
// //we cannot access the dog class(child class) methods using animal class(parent class) object......
//    //Animal a1;
//    //a1.sound();......//this will generate error....

//    //creating the object of dog class(inherated)
//     Dog d1;
//     //calling function of parent class...
//     d1.eat();
//     d1.sound();
// return 0;
// }










// //solving diamond problem using scope resolution operator(::)....
// #include<iostream>
// using namespace std;
// class A{
//   public:
//   int chem;
//   A(){
//      chem=101;
//   }
// };
// class B{
//   public:
//   int chem;
//   B(){
//      chem=69;
//   }
// };
// class C:public A,public B{
   
// };
// int main(){
// C obj;
// //cout<<obj.chem;...//ambiguity error...diamond problem...
// cout<<obj.A::chem<<endl<<obj.B::chem<<endl; //...scope resollution operator...
// return 0;
// }








// //POLYMORMPHISM.....
// //Virtual key word , upcasting , downcasting.....
// #include<iostream>
// using namespace std;
// class Animal{
//   public:
//    Animal(){
//     cout<<"hi bhai animal bol raha hu"<<endl;
//    } 
//    /*virtual*/ void speak(){
//     cout<<"speaking"<<endl;
//   }

// };
// class Dog:public Animal{
//   //Function overriding(runtime polymorphism).....
//   public:
//    Dog(){
//     cout<<"hi bhai dog bol raha hu"<<endl;
//    } 
//   void speak() /*override*/{
//     cout<<"barking"<<endl;
//   }
// };
// int main(){

//   //4 cases of typecasting(upcasting & downcasting)....
//   // we are dynamically creating the object(using new key word).....

//   //1.Normal case.....
//   Animal*a1=new Animal();
//   a1->speak();

//   //2.Upcasting.....
//   Animal*a2 = new Dog();
//   a2->speak();

//   //3.Normal case.....
//   Dog*d1= new Dog();
//   d1->speak();

//   //4.Downcasting.....
//   //unsafe karan... It prints "barking" by pointer type, not object type......
//    Dog*d2= (Dog*)new Animal();
//    d2->speak();


//    //Now lets play with constructor.....

//    //it always depent on the object type(i.e right side)...ex.Animal*a2 = new Dog(); -->dog() is object type...
//    //if dog(child class) is object type then--> 
//    /*hi bhai animal bol raha hu
//      hi bhai dog bol raha hu*/ 
//    //both gets print....because dog class is dependent on animal class(parent)....

  
//    return 0;
 
//   }



//const keyword.....
#include<iostream>
using namespace std;
int main(){
//1.normal const ..
  const int a=10;
  cout<<a<<endl;
  //a=18;  //we cannot assign value to a again...
//2.const with pointer...
 const int *num= new int(20);   //cont data,non-const pointer.....
 //int const * num=new int(20);
 //*num=17   //cant assign the value to the pointer because it is constant....
  cout<<*num<<endl;
 //cheating with const key word....
  int b=60;
  num=&b;
  cout<<*num<<endl;

//3. const pointer,but non-constant data...
  int *const k = new int (50);
  cout<<*k<<endl;
  //now i can change pointer value directly...
  *k=70;
  cout<<*k<<endl;

//4. const data ,const pointer...
  const int *const t = new int (100);
  cout<<*t<<endl; 

  //i cannot change this value .....any how....


}