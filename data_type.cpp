#include<iostream>
using namespace std;

int main() {
	// Write your code here
	string e;

	cout<<"Enter the data type name : "<<endl;
	cin>>e;

	if(e=="int" || e=="float")
	{
		cout<<4;
	}
	else if(e=="long" || e=="double")
	{
		cout<<8;
	}
	else if(e=="char")
	{
		cout<<1;
	}
	else{
		cout<<"Invalid";
	}

	return 0;
}
