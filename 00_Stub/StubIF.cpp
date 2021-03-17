#include "StubIF.h"
#include <iostream>

using std::cout;
using std::endl;

namespace work {

void StubIF::process1(int arg)
{
    (void)arg;
    cout << "StubIF::process1()" << endl;
}

void StubIF::process2(int arg)
{
    (void)arg;
    cout << "StubIF::process2()" << endl;
}

}
