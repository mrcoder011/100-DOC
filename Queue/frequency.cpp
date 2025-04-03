 #include <iostream>
 #include <queue>
 using namespace std;
 int main(){
    string str = "facfdcad";
    queue<char> q;
    int freq[26] = {0};
    for (int i=0; i< str.length(); i++)
    {
        char ch = str[i];
        freq[ch - 'a']++;
        q.push(ch);
        // answer find answer 
        while (!q.empty()){
            char frontchar = q.front();
            if(freq[frontchar - 'a'] > 1){
                // yaani yeh answer nhi h 
                q.pop();


            }
            else {
                // == 1 vala case yaaani yhi answer h 
                cout << frontchar << endl;
break;

            }

        }
        if(q.empty()){
            cout << "#" << endl; 
        }
    }
    return 0;

 };