#include <iostream>
using namespace std;
  
int main() {
    char d;
    float num1, num2;
      
    cout << "Enter an arithemetic operator(+ - * / %)\n";
    cin >> d;
    cout << "Enter two numbers as operands\n";
    cin >> num1 >> num2;
  
    switch(d) {
        case '+': 
                cout << num1 << " + " << num2 << " = " << num1+num2;
                break;
        case '-':
                cout << num1 << " - " << num2 << " = " << num1-num2;
                break;
        case '*':
                cout << num1 << " * " << num2 << " = " << num1*num2;
                break;
        case '/':
                cout << num1 << " / " << num2 << " = " << num1/num2;
                break;
        case '%':
                cout << num1 << " % " << num2 << " = " << num1*num2/100;
                break;
        default: 
                printf("ERROR: Unsupported Operation");
    }
      
    return 0;
}
