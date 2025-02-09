#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class bird{
    public:
    int age , weight;
    int nol;
    string color;
    void eat()
    {
        cout<< "bird is eating "<< endl;

    }
    void fly (){
        cout<< "bird is fly "<< endl;
 
    }

};

class sparrow : public bird {
 public: 
 sparrow(int age , int weight, string color , int nol){
    this->age=age;
    this->weight= weight;
    this->color = color;
    this-> nol = nol;

 }
 void grassing(){
    cout << "sparrow is grassing "<< endl;

 }

};
class piegon : public bird
{
    public :
    void guttering (){
        cout << "piegon is gutering "<<endl;

    }
    


};
int main(){
    sparrow s(1, 34,"black",3 );
    s.age;

    cout<< s.color<< endl;


    return 0;

}