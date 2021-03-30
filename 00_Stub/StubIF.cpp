#include "StubIF.h"
#include <iostream>

using std::cout;
using std::endl;

namespace work {

void StubIF::process1(int arg)
{
    (void)arg;
    cout << "StubIF::process1()" << endl;
    StubIF2::process3(arg);
}

void StubIF::process2(int arg)
{
    (void)arg;
    cout << "StubIF::process2()" << endl;
}

int StubIF::memory[] = {0};

void StubIF2::process3(int arg)
{
    (void)arg;
    cout << "StubIF2::process3()" << endl;
}

}
