// include the library
#include <iostream>
using namespace std;

// using main function
int main(){
int n;

// asking the values
cout<< "Asking for value"<<endl;
cin>>n;

/*
*****
** **
* * *
** **
*****
*/
for (int i = 0; i < n; i++){
	// if first row and last row print all stars
	if (i == 0 || i == n-1){
	 //print n stars
	 for (int j = 0; j < n; j++)
	 cout<< "*";
	}
	else{
		// rest print star
		cout<< "*";
		//and n-i+1 spaces and
		for(int j=0; j< (n-i+1); j++)
		cout<<" ";
		// star
		cout<< "*";
		}
		//endl
		cout<< endl;
	}	

return 0;
}

