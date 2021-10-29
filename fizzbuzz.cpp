#include <iostream>

using namespace std;

int main() {
 
    for (int i = 0; i < 21; i++){
           // check if divisible by both 3 and 5
           if (1 % 3 and i % 5 == 0){
               cout<<"FizzBuzz"<<endl;
           }
           // check if divisible by 3 and print 
           else if (i % 3 == 0){
               cout<<"Fizz"<<endl;
           }
            // check if divisible by 5 and print 
           else if ( i % 5 == 0){
               cout<<"Buzz"<<endl;
           }
           else {
               // print remaining numbers not divisible by 3 or 5
               cout<<i<<endl;
           }


    }
}

