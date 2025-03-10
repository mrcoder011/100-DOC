#include <iostream>
#include <stack>
using namespace std;
bool checkRedundancy(string &str){
    stack<char>st;
    for (int i=0; i< str.length(); i++){
        char ch = str[i];
        if(ch == '('||  ch == '+'|| ch == '-'|| ch == '*'||ch == '/'||ch == '%'){
            st.push(ch);

        }
        else if ( ch == ')'){
            int operatorcount = 0;
            while (! st.empty() && st.top() != '('){
                char temp = st.top();
                if ( temp == '+'|| temp == '-'||temp == '*'||temp == '/'){
                    operatorcount++;

                }
                st.pop();


            }
            // yha pr jb stack empty ho gya hoga tb 
            st.pop();
            if (operatorcount == 0){
                return true ;

            }
        }


    }    
    // agr mai yha tk aaya hu iska mtlb hr brack ke beech me ek bracket ke beech me  operator mila hoga ;
    return false ;


}
int main(){
    string str = "(((a+b)*(c+d)))";
    bool ans = checkRedundancy(str);
    if (ans == true ){
        cout<< "redundant bracket is present "<< endl;

    }
    else{
        cout<< "redundant bracket is not present "<< endl ;

    }
    return 0;

}