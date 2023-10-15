#include<iostream>
#include<windows.h>
#include<unistd.h>

using namespace std;
int main(){
    int a,b,c;
    char d;
    cout << "Hi....." << endl;
    sleep(1);
    cout << "Welcome To Simple Calculator by SG....!" << endl;
    sleep(1);
    cout << "Here You Can Perform Basic Arithmetic Operators." << endl;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Choose The Operation To Perform ( + , - , * , / , % ): ";
    cin >> d;
    if(d=='+'){
        c = a+b;
        cout << "The Sum Is: " << c;
    }
    else if(d=='-'){
        c = a-b;
        cout << "The Difference Is: " << c;
    }
    else if(d=='*'){
        c = a*b;
        cout << "The Product Is: " << c;
    }
    else if(d=='/'){
        float f = a/b;
        cout << "The Quotient Is: " << f;
    }
    else if(d=='%'){
        c = a%b;
        cout << "The Remainder Is: " << c;
    }
    else{
        cout << "Invalid Operator...  :(";
    }
    return 0;
}