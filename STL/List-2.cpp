#include<bits/stdc++.h>
using namespace std;

int main()
{
    //erase()function
    /*
    list<int>li={1,2,3,4,5};

    list<int>::iterator it,it2;
    it=li.begin();
    it2=li.begin();

    advance(it2,3);//index point
    li.erase(it,it2);
    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */

    //remove() function
    /*
    list<int>li={1,2,3,4,5};

    li.remove(3);

    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */

    //reverse() function
    /*
    list<int>li={1,2,3,4,5};

    li.reverse();

    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */

    //sort()
    /*
    list<int>li={1,4,3,5,2};

    li.sort();
    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */

    //unique()
    /*
    list<int>li={1,1,2,3,3,4,5};

    li.unique();//same number thakbe na
    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */

    //swap()
    /*
    list<int>li={1,2,3,4,5};
    list<int>li2={4,5,6,7,8};

    li.swap(li2);

    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: li2)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */

    //merge()
    list<int>li={1,2,3,4,5};
    list<int>li2={6,7,8,9};

    li.merge(li2);

    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;



}
