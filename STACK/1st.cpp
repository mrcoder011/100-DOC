 #include <iostream>
 #include <stack>
 using namespace std;

 int main(){
stack<int> st;
st.push(10);
st.push(20);

cout << "size of stack ->"  << st.size()<<endl;
st.pop();
cout << "size of after stack ->"  << st.size()<<endl;

    return 0;

 }