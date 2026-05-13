#include <iostream>
using namespace std;


int main() {

    bool MyBool1 {5 < 2};
    bool MyBool2 {5 > 2}; 


    cout << (MyBool1 && MyBool2) << endl;
    cout << (MyBool1 || MyBool2) << endl;

    MyBool1 = true;
    
    if (MyBool2) {
        cout << "Hello" << endl;
    }
}