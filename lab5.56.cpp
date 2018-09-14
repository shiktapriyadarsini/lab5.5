// include the library
#include <iostream>
using namespace std;
// using main function
int main(){
// declaring the variables
int n;
		// asking the value
		cout<<" Enter the value"<<endl;
		cin>>n;

		// printing the stars diagonally
		 for(int i=1; i<=n ; i++){
			// if first and last row print all stars
			for(int j=1; j<i ; j++){
				cout<<" ";
				}
				for(int j=1; j<=n; j++)
				{
					cout<< " ";
				}
				for(int j=1; j<=n; j++)
				{
					cout<<"*";
				}
			// endl
			cout<< endl;
}
		return 0;
}
