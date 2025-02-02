
#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    //Insertion
    //v.insert(v.begin()+1,5);
    v.insert(v.begin(),3,5);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    */
    //swap
/*
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    vector<int> v2;
    v2.push_back(50);
    v2.push_back(60);
    v2.push_back(70);
    v2.push_back(80);

    cout << "Before Swapping: " << endl;
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    swap(v1, v2);

    cout << "After Swapping: " << endl;
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    */

    //sort
    /*
    vector<int> v1;
    v1.push_back(50);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);

    cout<<"Before sort : "<<endl;
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout<<endl;

    sort(v1.begin(),v1.end());
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    */

    //reverse()
/*  vector<int> v1;
    v1.push_back(50);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);

    cout<<"Before sort : "<<endl;
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout<<endl;

    reverse(v1.begin(),v1.end());

    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    */
    vector<int> v1;
    v1.push_back(50);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);

    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<endl;
    }




    return 0;

}
