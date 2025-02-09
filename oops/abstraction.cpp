#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() { 
   /* vector<int> v = {3, 4, 2, 1};  // Corrected vector declaration
    sort(v.begin(), v.end());      // Sorting the vector in ascending order

    for (auto i : v) {             // Using range-based for loop to print elements
        cout << i << endl;
    }
*/
student s1(1,12,1,"chota bheem" , 1 , "chutki");
student s2 = s1;
cout << s1.name << endl;
cout << s2.name<< endl;
    return 0;
}
