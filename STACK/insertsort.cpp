#include <iostream>
#include <stack>
using namespace std;

void insertsort(stack<int> &st , int element){
if (st.empty() || element > st.top()){

st.push(element);
return;


}
// ek case smbhalena 
int temp = st.top();
st.pop();
insertsort(st , element) ;
// backtracking 

st.push(temp);

}


int main(){
    stack<int> st;

st.push(10);
st.push(20);
st.push(30);
//int element = 400;
insertsort(st , 35) ;

while(!st.empty()){
    cout<< st.top() << " ";
    st.pop();

}
return 0 ;




}