//include the library
#include <iostream>
using namespace std;

// using the main function
int main(){

// declaring variables
int n;

// asking for value
cout<<"The number"<<endl;
cin>>n;
for(int i=0; i<5; i++){
	// print stars
	for(int j=0; j<5; j++){
	cout<<"*";
	}
	cout<<endl;
}
return 0;
}

