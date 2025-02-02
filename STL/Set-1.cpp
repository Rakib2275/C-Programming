#include<bits/stdc++.h>
using namespace std;

int main(){
    //declaration
    set<int>s;  //ending print ,greater<int>
    //insert()
    s.insert(1); //same value uses single value provided
    s.insert(2);
    s.insert(3);
    s.insert(4);


    //size()
    //cout<<s.size()<<endl;

    //max_size()
    //cout<<s.max_size()<<endl;

    //begin(),end()
    //set<int>::iterator it;
    //for(it=s.begin(); it!=s.end();it++){
        //cout<<*it<<" ";
    //}
    //cout<<endl;

    //auto iterator print
    for(auto it: s)
        cout<<it<<" ";
    cout<<endl;

    //clear
    //s.clear();

    //erase()
    //s.erase(2); option 1
    /*
    set<int>::iterator it;
    it=s.begin();
    s.erase(it);

    for(auto it: s)
        cout<<it<<" ";
    cout<<endl;

    //empty();
    if(s.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;
    */
    set<int>::iterator it;
    it=s.find(2);

    if(it!=s.end())
        cout<<"Find"<<endl;
    else
        cout<<"Not Find"<<endl;

    int c=s.count(20);
    cout<<c<<endl;
}
