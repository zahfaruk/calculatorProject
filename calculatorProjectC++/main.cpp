#include <iostream>

using namespace std;

int main()
{
    string yesNo = "yes";
    int firstNum, secondNum;
    double result;
    char oper;
    cout << "Welcome to Calculator App!" << endl;
    while (yesNo == "yes") {
        // Input
        cout << "Enter the first number: ";
        cin >> firstNum;
        cout << "Enter an operator: ";
        cin >> oper;
        cout << "Enter the second number: ";
        cin >> secondNum;
        // Calculating the result
        switch (oper) {
            case '+':
                result = firstNum + secondNum;
                break;
            case '-':
                result = firstNum - secondNum;
                break;
            case '*':
                result = firstNum * secondNum;
                break;
            case '/':
                result = firstNum /(double)secondNum;
                break;
            case '%':
                result = firstNum % secondNum;
                break;
        }
        cout << "Final result is: " << result << endl;
        cout << "Do you want to continue?" << endl;
        cin >> yesNo;
        if (yesNo != "yes" && yesNo != "no") {
            cout << "Invalid input.\n";
            cout << "Do you want to continue?" << endl;
            cin >> yesNo;
        }
    }
    return 0;
}
