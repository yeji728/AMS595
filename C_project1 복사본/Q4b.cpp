
#include <iostream>




#include <vector>



//function for printing vector
void print_vector(std::vector<int> v){

    std:: cout << "[";
    for ( int i = 0; i < v.size(); ++i )  {

        std:: cout << v[i];
        
        if (i < v.size() -1) {

            std:: cout << ", ";

        }


    }

    std:: cout << "]" << std:: endl;
}





std::vector<int> factorize(int n) {
        std::vector<int> answer;
        // Iterate through numbers from 1 to n
        for(int i = 1; i <= n; ++i){

                // If i is a factor of n, add it to the answer vector
                if(n % i == 0){
                        answer.push_back(i);

                }
        }
        return answer;

        
}

        

void test_factorize() {
        print_vector(factorize(2));
        print_vector(factorize(72));
        print_vector(factorize(196));
}
int main(){
        test_factorize();
        return 0;
}