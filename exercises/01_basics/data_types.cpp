
#include <iostream>
using namespace std;


int main(){ 
    float temperature; 

    temperature = 98.7f;
    cout << " The Current Temperature is " << temperature << endl; 
    float tmmrw_temperature = temperature + 1.3;
    cout << "Tommorow The temperature will be " << tmmrw_temperature << endl;
    tmmrw_temperature++;
    cout << "The following day the temperature will be " << (tmmrw_temperature) << endl;

    cout << string(20, '-') << endl;
    //  Type casting 
    unsigned char x = 255;
    cout << (int)x << endl;
    cout << x << endl;
    cout << static_cast<int>(x) << endl;
    cout << (x/ 4) << endl;
    cout << static_cast<long>(x) << endl;
    cout << (static_cast<float>(x)/ 4 ) << endl;

    // unsigned int negativeValue {-5};  //Should cause error

    cout << string(20, '-') << endl;

    // Size 
    cout << sizeof(temperature) << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(static_cast<double>(x)) << endl;

}