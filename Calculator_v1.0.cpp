#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    char znak;
    double a, b, result;
    cout << "Enter the first number:" << endl;
    cin >> a;
    while (true) {
        cout << endl << "Enter Operation sign: " << endl << "Sum: + " << endl << "Sub: - " << endl << "Multiplication: * " << endl << "Division: / " << endl << endl;
        cin >> znak;
        if (znak == 'Q') {
            cout << endl << "Bye!" << endl;
            return 0;
        }
        else {
            while (znak != 'Q') {

                switch (znak)
                {

                case '+':
                    cout << endl << "Enter the second number:" << endl;
                    cin >> b;
                    result = a + b;
                    a = result;
                    break;

                case '-':
                    cout << endl << "Enter the second number:" << endl;
                    cin >> b;
                    result = a - b;
                    a = result;
                    break;

                case '*':
                    cout << endl << "Enter the second number:" << endl;
                    cin >> b;
                    result = a * b;
                    a = result;
                    break;

                case '/':
                    cout << endl << "Enter the second number:" << endl;
                    cin >> b;
                    result = (double)a / b;
                    a = result;
                    break;

                case 'C':
                    result = 0;
                    cout << endl << "Enter the second number:" << endl;
                    cin >> a;
                    result = a;
                    break;

                default:
                    cout << endl << "I do not know this operation sign:" << endl;
                    break;

                }
                cout << endl << "---" << endl << "Result: " << result << endl << "---" << endl;
                break;
            }
        }
    }
}