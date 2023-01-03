// Programming Basics - I
#include<iostream>
using namespace std;
int main(){
// 1. Data types and variable
// a. int data type
// int a=5;
// cout<<"value of a is:"<<a<<endl;
// cout<<"the size of int : "<<sizeof(a)<<endl;

// b. boolean data type
// bool b=0;
// cout<<"value of b is:"<<b<<endl;
// cout<<"the size of boolean: "<<sizeof(b)<<endl;

// c.float
// float f=1.3;
// cout<<"value of f is:"<<f<<endl;
// //size of floar
// cout<<"the size of float : "<<sizeof(f)<<endl;

//d.char 
// char ch='a';
// cout<<"value of ch is: "<<endl;
// cout<<"the size of float : "<<sizeof(ch)<<endl;

// 2. Size of data types
// a. int 
// int a;
// cout<<sizeof(a)<<endl;
//output:4 

 
// b.float
// float b=1.6;
// cout<<"size of float is: "<<sizeof(b)<<endl;
//output: size of float is:4

// c. char
// char ch='a';
// cout<<"size of float is: "<<sizeof(ch)<<endl;
//output: size of float is: 1



// 3. Typecasting
// example-1 Explicit conversion
// a Ascii value is 97
// char ch='a';
// charatcer converted into int
// int num=(int)ch;
// cout<<num<<endl; 
// output: 97

// example-2: implicit conversion
// float a=5.0;
// int b=3;
// int ans=a/b;
// cout<<"ans is:"<<ans<<endl;
// output: ans is:1

// example-3 : 
// float a=5.0;
// int b=3;
// cout<<(a/b)<<endl;
//output: 1.66667

// 4. Relational operator
// eg-1
// int x=5,y=5;
// bool b=(x==y);

// cout<<b<<endl;
// output: 1(true)

// eg-2
// int x=5,y=5;
// bool b=(x>y);
// cout<<b<<endl;
// output: 0 (flase)

//5. Bitwise logical operator
// 1. Bitwise AND operator
// int a=5;
// int b=6;
// int ans=a&b;
// cout<<ans<<endl;//output: 4

//2. Bitwise or operator
// int a=5;
// int b=6;
// int ans=a||b;
// cout<<ans<<endl; //output: 1

// 3. Bitwise xor operator
// int a=5;
// int b=6;
// int ans=a^b;
// cout<<ans<<endl;//output:3

// 4. Bitwise left shit operator
// int a=5;
// int b=2;
// int ans=a<<b;
// cout<<ans<<endl; //output: 20

// 5. Bitwise right shif operator
// int a=5;
// int b=2;
// int ans=a>>b;
// cout<<ans<<endl;//output: 1   

}