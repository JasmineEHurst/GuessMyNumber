//
//  main.cpp
//  Guess My Number program
//
//  Created by Scraggy on 4/15/18.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    srand(static_cast<unsigned int>(time(0)));
    
    int secretNumber = rand()% 100 +1;
    int tries = 0;
    int guess;
    int totalTries = 10;
    
    while(tries <= totalTries) {
        cout<<"Enter a guess: \n";
        cin>>guess;
        if(guess == secretNumber) {
            cout<<"You win! \n";
            return 0;
        } else if(guess < secretNumber) {
            cout<<"Too low\n";
        } else {
            cout<<"Too high!\n";
        }
        tries++;
    }
    cout<<"You lose :( \n, the answer was " <<secretNumber;
    
    return 0;
}
