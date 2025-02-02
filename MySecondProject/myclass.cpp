#include "myclass.h"
#include <iostream>

using namespace std;

void MyClass:: display1() const
{
    cout<<"This is constant function"<<endl;
}
void MyClass:: display2()
{
    cout<<"This is Non-constant function";
}

