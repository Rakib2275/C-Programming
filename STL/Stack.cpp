#include<bits/stdc++.h>
using namespace std;

int main(){
    //declaration
    stack<int>st;
    //push
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    //empty
    /*
    if(st.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;
    */

    //size()
    //cout<<st.size()<<endl;

    st.pop();

    //top
    cout<<st.top()<<endl;
}
