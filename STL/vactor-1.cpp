//Vector Declaration
//push_back()
//how to print vector value
//size()
//front
//back()
//clear()
//empty()
//pop_back()
//erase()
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int ar[1000];
    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    /*
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;

    cout<<v.at(0)<<endl;
    cout<<v.at(1)<<endl;


    */
    //cout<<v.at(7);

    for(int i=0;i<v.size();i++){ //array size()
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();  //last value delete
    for(int i=0;i<v.size();i++){
             cout<<v[i]<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+1,v.end()); //any value delete
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    //cout<<v.front()<<endl;  //front value
    //cout<<v.back()<<endl;  //back value print
    v.clear();

    if(v.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty "<<endl;





    //v.clear();
    //cout<<v.size()<<endl;     //size
}
