#include "StubIF.h"
#include <iostream>

using std::cout;
using std::endl;
using work::StubIF;

int main(void)
{
    StubIF impl;

    cout << "sizeof(impl) " << sizeof(impl) << endl;
    StubIF::process1(0);
    impl.process1(0);
    impl.process2(0);
}
