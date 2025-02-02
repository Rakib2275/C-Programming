#include<bits/stdc++.h>
using namespace std;


int main()
{
    set<int>s = {1,2,4,5};
    set<int>s1;
    s1 = s;

    //s.emplace(3);
    //s.emplace(8);

    //s.swap(s1);

    for(auto it:s1)
        cout<<it<<" ";
    cout<<endl;

    /*set<int>::iterator it;
    it = s.upper_bound(1);

    if(it==s.end())
    {
        cout<<"The element is larger to the Greater element"<<endl;
    }
    else{
        cout<<"The upper bound of 3 is : "<<*it<<endl;
    }
    */
}
