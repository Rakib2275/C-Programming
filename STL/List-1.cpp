#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_front(4);
    li.push_front(5);

    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<li.front()<<endl;
    cout<<li.back()<<endl;



    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    */
    //pop front & back
    /*
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_front(4);
    li.push_front(5);

    //li.clear();

    //li.pop_front();
    //li.pop_back();
    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    if(li.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"NOt Empty"<<endl;

    */
    //cout<<li.size()<<endl;

    //insert
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_front(4);
    li.push_front(5);

    list<int>::iterator it;
    it = li.begin();
    advance(it,3);

    li.insert(it,4,6);

    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}
