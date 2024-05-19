/*
Calculater
v8
made by AxoGM
*/

#include <iostream>
using namespace std;

// input
int a, i, n, num, total;

// void input
void add(), sub(), mult(), divi(), mod();

// main function
int main() {
    // interface
    cout << "\t||||||||||||||||||||||" << endl << "\t|||||[Calculater]|||||" << endl << "\t||||||||||||||||||||||\n" << endl << "[0]+\t[1]-\t[2]×\t[3]÷\t[4]%\n" << endl << "enter operation: ";
    cin >> a;

    // switch selection
    switch(a) {
        // function input in main function
        case 0: {
            cout << "\n+\n";
            add();
            break;
        }
        case 1: {
            cout << "\n-\n";
            sub();
            break;
        }
        case 2: {
            cout << "\n×\n";
            mult();
            break;
        }
        case 3: {
            cout << "\n÷\n";
            divi();
            break;
        }
        case 4: {
            cout << "\n%\n";
            mod();
            break;
        }
        default: {
            cout << "\n(˙◠˙) Error... Try again.\n";
        }
    }

    // output calculate
    cout << "\nAnswer: " << total << endl;
    
    return 0;
}

// addition function
void add() {
    // input for how much number to calculate
    cout << "\nEnter the number of numbers: \n";
    cin >> n;
    cout << endl;

    // calculate loop
    for (i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": \n";
        cin >> num;

        // format calculate
        total = total + num;
    }
}

// subtraction function
void sub() {
    // input for how much number to calculate
    cout << "\nEnter the number of numbers: \n";
    cin >> n;
    cout << endl;

    // calculate loop
    for (i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": \n";
        cin >> num;

        // format calculate
        total = total - num;
    }
}

// multplication function
void mult() {
    // input for how much number to calculate
    cout << "\nEnter the number of numbers: \n";
    cin >> n;
    cout << endl;

    // calculate loop
    for (i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": \n";
        cin >> num;

        // format calculate
        total = total * num;
    }
}

// division function
void divi() {
    // input for how much number to calculate
    cout << "\nEnter the number of numbers: \n";
    cin >> n;
    cout << endl;

    // calculate loop
    for (i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": \n";
        cin >> num;

        // format calculate
        total = total / num;
    }
}

// modules function
void mod() {
    // input for how much number to calculate
    cout << "\nEnter the number of numbers: \n";
    cin >> n;
    cout << endl;

    // calculate loop
    for (i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": \n";
        cin >> num;

        // format calculate
        total = total % num;
    }
}