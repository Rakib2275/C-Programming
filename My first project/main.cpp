#include <iostream>
#include "my first class.h"
using namespace std;

int main()
{
    MyFirstClass ob;
    //ob.display();
    MyFirstClass *p = &ob;
    p ->display();//selection oparetor

    return 0;

}
