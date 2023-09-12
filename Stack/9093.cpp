#include<iostream>
#include<stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    while(n--){
        string str;
        getline(cin, str);
        str += ' ';
        stack<char> st;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' '){
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                cout << str[i]; // s[i] == ' '
            }
            else
                st.push(str[i]);
        }

        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }
}