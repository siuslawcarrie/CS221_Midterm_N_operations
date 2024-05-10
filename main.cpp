#include <iostream>
#include <unistd.h>//sleep function
#include <cmath> //pow function
#include <cstdio> //exit function

using namespace std;

//FUNCTION PROTOTYPES
int user_number(); //collect & validate user number
int user_choice(); //collect & validate user choice
int validation_integer(int min, int max); //validate integer

//PROGRAM
int main() {
    //user number
    int N = 0 ;
    //result
    int result = 0 ;
    //user choices
    int choice = 0;

    //display rules
    cout
            << "Welcome to the Game of Operation, Integer Operation that is. I'll ask you for an integer "
               "between 1 and 10 and the operator you desire. Then I'll calculate and give you a result!"
            << endl;
    //sleep(2);
    cout << "Okay, let's go!" << endl;
    //sleep(2);

    N = user_number();
//    N=8;
    choice = user_choice();
    //switch on choice & calculate
    switch (choice) {
        case 1:
            result = N * 2;
            break;
        case 2:
            result = pow(N, 2);
            break;
        case 3:
            result = pow(2, N);
            break;
        default:
            cout << "unknown error";
    }
    cout << "The result of your calculation is: " << result;


    return 0;
}

//FUNCTION DEFINITIONS
//function to collect & validate user integer
int user_number() {
    int N;
    //ask user for number
    cout << "Enter an integer between 1 and 10 (N): " << endl;
//    cin >> N;
    int min = 1, max = 10;
    return validation_integer(min, max);
}
//function to collect & validate user in

int user_choice() {
    int choice;
    //ask user for an operation
    cout << "Operations" << endl;
    cout << "1. 2*N" << endl;
    cout << "2. N^2" << endl;
    cout << "3. 2^N" << endl;
    cout << "Please choose an operation by entering choice 1, 2, or 3: " << endl;
//    cin>>choice;
    int min = 1, max = 3;
    return validation_integer(min, max);
}

int validation_integer(int min, int max) //function to validate integers
{
    int number;
    cin >> number;
    while (!cin or (number < min) or (number > max)) {
// Explain error not entering an integer
        cout << "I'm sorry that's not a valid entry. ";
        exit(0);//terminate program

    }
    return number;
}
