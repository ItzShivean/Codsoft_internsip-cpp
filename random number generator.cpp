#include<iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <unistd.h>

using namespace std;
int main(){
    int a;
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomnbr = rand() % 100 + 1;
    cout << "Welcome Guess The Number Game By SG..!"<< endl;
    sleep(2);
    cout << "I Had Selected A Number Between 1 To 100.."<< endl;
    sleep(2);
    cout << "Let's Start......"<< endl;
    sleep(2);
    for (int b=1; ;b++){
        cout << "Attempts: "<< b << endl << "Enter Your Guess: ";
        cin >> a;
        if(a < randomnbr){
            cout << "Too Low..! Try Again" << endl;
        }
        else if(a > randomnbr){
            cout << "Too High..! Try Again" << endl;
        }
        else{
            cout << "Congratulations! You Have Guessed The Right Number...  :)";
            break;
        }
    }
    return 0;
}




