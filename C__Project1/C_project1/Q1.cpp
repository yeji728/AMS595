
#include <iostream>


using namespace std;


int main() {
	// declare a variable to store user input
	
    
    int n;
	
	//prompt the user to enter a number
	cout << " Enter a number: " ;
	
	// read the input from the user
    
	cin >> n;

     // Use a switch statement to handle different cases based on the user input
    switch(n){

		// Output if the input is -1
		case -1:
			cout  << "negative one"<< endl;
			break;

		// Output if the input is 0	
        case 0:
			cout  << "zero" << endl;
			break;

		// Output if the input is 1	
        case 1:
            cout  << "positive one" << endl;
			break;

		default :
			// Output if the input doesn't match any of the specified cases
			cout  << "other value" << endl;
			break;
	}
	return 0;

}

