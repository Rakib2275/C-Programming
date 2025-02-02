#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>ml,ml2;
    ml.insert(1);
    ml.insert(1);
    ml.insert(2);
    ml.insert(2);
    ml.insert(2);
    ml.insert(5);

    ml2.insert(1);
    ml2.insert(1);
    ml2.insert(1);
    ml2.insert(1);
    ml2.insert(1);

    ml.swap(ml2);

    for(auto it: ml2)
    {
        cout<<it<<" ";
    }
    cout<<endl;

//    //size
//    cout<<ml.size()<<endl;
//
//    maxsize
//    cout<<ml.max_size()<<endl;

//    begin() & end()
//    multiset<int>::iterator it;
//    for(it = ml.begin();it!= ml.end();it++)
//    {
//        cout<<*it<<" ";
//    }
//    cout<<endl;

    //clear
    //ml.clear();

    //empty
//    if(ml.empty())
//        cout<<"Empty"<<endl;
//    else
//        cout<<"Not Empty"<<endl;

    //erase
    //ml.erase(1);

    //find
    //auto it = ml.find(2);
    //if(it==ml.end())
       // cout<<"Not Find"<<endl;
    //else
      //  cout<<"Find"<<endl;

    //count
    //cout<<ml.count(1)<<endl;


    //auto it = ml.upper_bound(1);
    //cout<<*it<<endl;




}
