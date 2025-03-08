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

void reversestack(stack<int > &st){
    // bc 
    if(st.empty()){
       return;

    }
    int temp = st.top();
    st.pop();
    // rec
    reversestack(st);
    intsertAtbottom(st , temp);
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    //int element = 400;
    reversestack(st);
    
    //intsertAtbottom(st,element);
    cout<< "without reverse"<< endl;

    while(!st.empty()){
        cout<< st.top() << " ";
        st.pop();
    
    }
    return 0 ;
}