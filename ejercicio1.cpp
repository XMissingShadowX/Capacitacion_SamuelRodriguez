#include <iostream>

using namespace std;

// FizzBuzz
int main() {
    for (int i = 1; i <= 100; i++){
        if (i % 5 == 0 && i % 3 == 0){  //si es divisible entre 3 y 5
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0){         //si es divisible entre 3
            cout << "Fizz" << endl;
        } else if (i % 5 == 0){         //si es divisible entre 5
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
        
    }
}
