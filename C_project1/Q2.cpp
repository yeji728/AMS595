#include <iostream>




#include <vector>
using namespace std;



void print_vector(vector<int> v){
    // Output the opening bracket of the vector representation
    cout << "[";

    // Loop through each element in the vector
    for ( int i = 0; i < v.size(); ++i )  {


        // Output the current element
        cout << v[i];

        // Output a comma and space if it's not the last element

        if (i < v.size() -1) {

            // Output the closing bracket of the vector representation and a newline
            cout << ", ";

        }


    }

    cout << "]" << endl;
}

 
int main() {


    

    return 0;
}