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
void sortstack(stack<int> &st ){
    if(st.empty()){
        return;

    }
    int temp = st.top();
    st.pop();
    // rec sort  
    sortstack(st);

    // bacltracking 
    insertsort(temp);
    
}


int main(){
    stack<int> st;

st.push(10);
st.push(7);
st.push(12);

st.push(5);
st.push(11);
//int element = 400;
insertsort(st , 35) ;

while(!st.empty()){
    cout<< st.top() << " ";
    st.pop();

}
return 0 ;




}