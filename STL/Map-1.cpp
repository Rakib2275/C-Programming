#include<bits/stdc++.h>
using namespace std;

int main()
{
//    map<int,int>mp; //key or index
//    mp.insert({1,10});
//    mp.insert({2,20});
//    mp.insert({3,30});
//    mp.insert({4,40});
//    mp.insert({5,50});

//    for(auto it:mp)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }

//    map<int,int>::iterator it;
//
//    for(it=mp.begin();it!=mp.end();it++)
//    {
//        cout<<it->first<<" " <<it->second<<endl;
//    }

//    cout<<"size:"<<mp.size()<<endl;
//    cout<<"Max-size "<<mp.max_size()<<endl;

//    mp.clear();
//
//    if(mp.empty())
//        cout<<"Empty"<<endl;
//    else
//        cout<<"NOt Empty"<<endl;

    map<int,string>mp;
    mp.insert({1,"rakib"});
    mp.insert({2,"sakib"});
    mp.insert({3,"adib"});
    mp.insert({4,"rafsa"});
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
