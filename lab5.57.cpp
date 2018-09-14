// include the library
#include <iostream>
using namespace std;
// using main function
int main(){

	// declaring the variable
	int n;

	// asking the value
	cout<< "Enter the value"<<endl;
	cin>>n;

	// printing the stars
	 for(int i=0; i<=n; i++)
    {
        // Print diagonal spaces 
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }

        // Print hollow rhombus 
        for(int j=0; j<=n; j++)
        {
            if(i==0 || i==n || j==0|| j==n)
                cout<<"*";
            else
                cout<<" ";
        }
				// endl
        cout<< endl;
    }

    return 0;
}
