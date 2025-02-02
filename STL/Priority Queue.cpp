#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
/*

    if(pq.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;

*/

      //cout<<pq.size()<<endl;

      //pq.pop();
      //cout<<pq.top()<<endl;

      while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
      }
}
