#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    //dq.push_front(4);
    //dq.push_front(5);

    //int a=dq.size();
    //cout<<a<<endl;

    //dq.pop_front();
    //dq.pop_back();

    //dq.clear();

    deque<int>::iterator it,it2;

    it=dq.begin()+2;
    dq.insert(it,2,8);

    /*deque<int>::iterator it,it2;
    it=dq.begin();
    it2=dq.begin()+3;

    dq.erase(it,it2);
    */

    for(int i=0;i<dq.size();i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    /*if(dq.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;
    */

    //cout<<dq.front()<<endl;
    //cout<<dq.back()<<endl;
}
