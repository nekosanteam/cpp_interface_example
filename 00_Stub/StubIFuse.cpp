#include "StubIF.h"
#include <iostream>

using std::cout;
using std::endl;
using work::StubIF;

StubIF impl2;

int main(void)
{
    StubIF impl1;
    StubIF* impl3 = nullptr;

    cout << "sizeof(impl) " << sizeof(impl1) << endl;
    StubIF::process1(1);
    impl1.process1(2);
    impl2.process2(3);
    impl3->process1(4);
    impl3->memory[0] = 1;
    StubIFprocess1(5);
}
