#include <iostream>
using namespace std;



bool is_even(int num){
    return num % 2 == 0;
}

float add(float num1, float num2){
    return num1 + num2;
}

float divide(float num1, float num2){
    return num1 / num2;
}


void fibonacchi(int n){


    if(n == 0){
        cout << static_cast<int>('0') << endl;
        return;
    } else if (n == 1)
    {
        cout << '1' << endl;
        return;
    }
    
    int num1 = 0; 
    int num2 = 1;


    cout << num1 << endl;
    cout << num2 << endl;

    for(int i; i <= n-2; i++){
        int val = num1 + num2;
        cout << val << endl;
        num1 = num2;
        num2 = val; 

    }

}

int main(){

    for (int i=0; i < 11; i++){
        string out = (is_even(i) ? "Even" : "Odd"); 
        cout << i << " is " << out << endl;
    }



    cout << divide(2, 4) << endl; 
    cout << add(2, 4) << endl;

    int n = 4;
    cout << "Fibonacci Sequence for n=" << n << endl;
    fibonacchi(n);
}   