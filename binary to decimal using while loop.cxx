#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter your number to convert decimal into binary :- ";
	cin>>n;
	int i=1;
	int ans=0;
	while(n!=0){
		int digit= n%10;
		ans=(digit*pow(2,i)) + ans;
		n=n/10;
		i++;
		
		}
		cout<<ans;
	}