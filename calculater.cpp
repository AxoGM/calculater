/*
Calculater
v7
made by AxoGM
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, num1, num2, num3, num4, num5, total;
    char choose;

    do {
        Menu:

        // title
        cout << "\t||||||||||||||||||||||" << endl;
        cout << "\t|||||[Calculater]|||||" << endl;
        cout << "\t||||||||||||||||||||||" << endl;
        cout << endl;

        // choose
        cout << "[0]+ [1]- [2]× [3]÷" << endl;
        cout << endl;
        cout << "enter operation: ";
        cin >> a;

        switch(a){

            // +
            case 0: {
                cout << "+" << endl;

                // choose number
                cout << "[0] 2 number [1] 3 number [2] 4 number [3] 5 number" << endl;
                cout << "choose number: " << endl;
                cin >> b;
                cout << endl;

                switch(b){

                    // 2 number +
                    case(0): {
                        cout << "enter number: " << endl;
                        cin >> num1;
                        cin >> num2;

                        total = num1 + num2;

                        cout << endl;
                        cout << num1 << " + " << num2 << endl;
                        cout << "answer: " << total << endl;

                        break;
                    }

                    // 3 number +
                    case(1): {
                        cout << "enter number: " << endl;
                        cin >> num1;
                        cin >> num2;
                        cin >> num3;

                        total = num1 + num2 + num3;

                        cout << endl;
                        cout << num1 << " + " << num2 << " + " << num3 << endl;
                        cout << "answer: " << total << endl;

                        break;
                    }

                    // 4 number +
                    case(2): {
                        cout << "enter number: " << endl;
                        cin >> num1;
                        cin >> num2;
                        cin >> num3;
                        cin >> num4;

                        total = num1 + num2 + num3 + num4;

                        cout << endl;
                        cout << num1 << " + " << num2 << " + " << num3 << " + " << num4 << endl;
                        cout << "answer: " << total << endl;

                        break;
                    }

                    // 5 number +
                    case(3): {
                        cout << "enter number: " << endl;
                        cin >> num1;
                        cin >> num2;
                        cin >> num3;
                        cin >> num4;
                        cin >> num5;

                        total = num1 + num2 + num3 + num4 + num5;

                        cout << endl;
                        cout << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << endl;
                        cout << "answer: " << total << endl;

                        break;
                    }

                    default: 
                        cout << "error... please choose the number again." << endl;
                }

                break;
            }

            // -
            case 1: {
                cout << "-" << endl;

                // choose number
                cout << "[0] 2 number [1] 3 number [2] 4 number [3] 5 number" << endl;
                cout << "choose number: " << endl;
                cin >> b;
                cout << endl;

                switch(b){

                    // 2 number -
                    case(0): {
                        cout << "enter number: " << endl;
                        cin >> num1;
                        cin >> num2;

                        total = num1 - num2;

                        cout << endl;
                        cout << num1 << " - " << num2 << endl;
                        cout << "answer: " << total << endl;

                        break;
                    }

                    // 3 number -
                    case(1): {
                        cout << "enter number: " << endl;
                        cin >> num1;
                        cin >> num2;
                        cin >> num3;

                        total = num1 - num2 - num3;

                        cout << endl;
                        cout << num1 << " - " << num2 << " - " << num3 << endl;
                        cout << "answer: " << total << endl;

                        break;
                    }

                    // 4 number -
                    case(2): {
                        cout << "enter number: " << endl;
                        cin >> num1;
                        cin >> num2;
                        cin >> num3;
                        cin >> num4;

                        total = num1 - num2 - num3 - num4;

                        cout << endl;
                        cout << num1 << " - " << num2 << " - " << num3 << " - " << num4 << endl;
                        cout << "answer: " << total << endl;

                        break;
                    }

                    // 5 number -
                    case(3): {
                        cout << "enter number: " << endl;
                        cin >> num1;
                        cin >> num2;
                        cin >> num3;
                        cin >> num4;
                        cin >> num5;

                        total = num1 - num2 - num3 - num4 - num5;

                        cout << endl;
                        cout << num1 << " - " << num2 << " - " << num3 << " - " << num4 << " - " << num5 << endl;
                        cout << "answer: " << total << endl;

                        break;
                    }

                    default: 
                        cout << "error... please choose the number again." << endl;
                }

                break;
            }

            // ×
            case 2: {
                cout << "×" << endl;

                cout << "enter number: " << endl;
                cin >> num1;
                cin >> num2;

                total = num1 * num2;

                cout << endl;
                cout << num1 << " × " << num2 << endl;
                cout << "answer: " << total << endl;

                break;
            }

            // ÷
            case 3: {
                cout << "÷" << endl;

                cout << "enter number: " << endl;
                cin >> num1;
                cin >> num2;

                total = num1 / num2;

                cout << endl;
                cout << num1 << " ÷ " << num2 << endl;
                cout << "answer: " << total << endl;

                break;
            }

            default: 
                cout << "error... try again." << endl;
        }

    c++;

    } while (c == choose);

    cout << endl;
    cout << "exit? ";
    cin >> choose;

    if (choose == 'n' || choose == 'N') {
        goto Menu;
    }

    return 0;
}