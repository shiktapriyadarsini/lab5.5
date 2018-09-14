// include the library
#include <iostream>
using namespace std;

// using main faunction
int main(){

	// declaring the variables
	int n;

	// asking the values
	cout<< "The number"<<endl;
	cin>>n;

	/*
	*****
	*   *
	*   *
	*   *
	*****
	*/
	for (int i = 0 ; i < n ; i ++){
		// if 1st row or last row print all stars 
		if (i == 0 || i == n-1){	
			// print n stars
		  for (int j = 0 ; j < n ; j++)	
				cout << "*";
		}
		else {
			// print rest star 
			cout << "*";
			//and n-2 spaces and 
			for (int j = 0 ; j < (n-2) ; j++)	
				cout << " ";
			// star
			cout << "*";
		}
		// endl
		cout << endl;
	}

	return 0;
}
	
