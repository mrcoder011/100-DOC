#include <iostream>
#include <stack>
using namespace std;

void intsertAtbottom(stack<int> &st, int &element){
    // base case 
    if ( st.empty()){
        st.push(element);
         return;
    }
    int temp = st.top();
    st.pop();
    

// baaki recursion ko dedia 
intsertAtbottom(st , element);
st.push(temp);

}




int main(){
    stack<int> st;

st.push(10);
st.push(20);
st.push(30);
int element = 400;

intsertAtbottom(st,element);

while(!st.empty()){
    cout<< st.top() << " ";
    st.pop();

}
return 0 ;




}