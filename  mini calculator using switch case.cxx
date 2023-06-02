#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a;
	cout<<"Enter your first number:- "<<endl;
	cin>>a;
	int b;
	cout<<"Enter your second number:- "<<endl;
	cin>>b;
	char ch;
	cout<<"select operation:- "<<endl;
	cin>>ch;
	switch(ch){
		case '+':cout<<a+b<<endl;
		              break;
		
		case '-': cout<<a-b<<endl;
		             break;
		
		case '*':cout<<a*b<<endl;
		              break;
		 
		case '/':cout<<a/b<<endl;
		              break;
		
		}
	}