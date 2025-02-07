#include <iostream>
using namespace std;

int main(){ /*
    const int x = 5;
    cout<< x<< endl;
    return 0;
*/
//const with pointer
int *a = new int;
*a = 2;
cout<< *a<< endl;
delete a;
int b = 5;
a = &b ;
cout << *a << endl;
return 0 ;

}