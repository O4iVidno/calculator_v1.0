#include <iostream>
using namespace std;
int main()
{
    char znak; 
    double a, b, result; 
    cout << "Enter the first number:" << endl; 
    cin >> a; 
    while (true) { 
        cout << endl << "Enter Operation sign: " << endl << "Sum: + " << endl << "Sub: - " << endl << "Multiplication: * " << endl << "Division: / " << endl << "Quit: Q " << endl << "Clear: C " << endl  << endl;
        cin >> znak; 
        if (znak == 'Q') { 
            cout << endl << "Your last result: " << endl << result << endl << "Bye!" << endl;

            return 0; //
        }
        else { 
            while (znak != 'Q') {
                switch (znak)
                {
                case '+':
                    cout << endl << "Enter the second number:" << endl;
                    cin >> b;
                    result = a + b;
                    cout << endl << "---" << endl << "Result: " << result << endl << "---" << endl; 
                    a = result;
                    break; 

                case '-':
                    cout << endl << "Enter the second number:" << endl;
                    cin >> b;
                    result = a - b;
                    cout << endl << "---" << endl << "Result: " << result << endl << "---" << endl;
                    a = result;
                    break;

                case '*':
                    cout << endl << "Enter the second number:" << endl;
                    cin >> b;
                    result = a * b;
                    cout << endl << "---" << endl << "Result: " << result << endl << "---" << endl;
                    a = result;
                    break;

                case '/':
                    cout << endl << "Enter the second number:" << endl;
                    cin >> b;
                    if (b == 0) {
                        cout << endl << "You can't divide by 0!" << endl;
                        break;
                    }
                    else {
                        result = (double)a / b;
                        cout << endl << "---" << endl << "Result: " << result << endl << "---" << endl;
                        a = result;
                        break;
                    }

                case 'C':
                    result = 0;
                    cout << endl << "Enter the first number:" << endl;
                    cin >> a;
                    break;

                default: 
                    cout << endl << "Choose a sign from the list, otherwise I can't help you." << endl;
                    break;
                }
                break;
            }
        }
    }
}
