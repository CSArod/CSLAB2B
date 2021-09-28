/* NAME: ALEJANDRO_RODRIQUEZ, 2001889172, 1001_GROUP_1, LAB_2B
DESCRIPTION: INTEGER_AND_DOUBLE_ARITHMETIC 
INPUT: PAIR_OF_INT/DOUBLES
OUTPUT: STRING_CONTAINING_INT/DOUBLES
*/

#include <iostream>

using namespace std;

int num1, num2;
int add, subtract, multiply, divide, mod;


int main(){
   

    cout << "Enter an integer\n**";                                         //PROMPT USER FOR PAIR OF INTEGERS
    cin >> num1;
    cout << "\nEnter another integer\n**";
    cin >> num2;

    add = num1 + num2; 
    subtract = num1 - num2;
    multiply = num1 * num2;
    divide = num1 / num2;
    mod = num1 % num2;

    cout << "\n" << num1 << " + " << num2 << " = " << add << endl;                //OUTPUT INTEGER CALCULATIONS
    cout << num1 << " - " << num2 << " = " << subtract << endl;
    cout << num1 << " * " << num2 << " = " << multiply << endl;
    cout << num1 << " / " << num2 << " = " << divide << endl;
    cout << num1 << " % " << num2 << " = " << mod << endl;

    double a;
    double b;

    cout << "\nEnter a double\n**";                                               //PROMPT USER FOR PAIR OF DOUBLES 
    cin >> a;
    cout << "\nEnter another double\n**";
    cin >> b;
    cout << "\n" << (double)a << " / " << (double)b << " = " << a/b << endl;      //OUTPUT QUOTENT OF DOUBLES

    return 0;
       
}