#include "InheritIF.h"
#include "InheritIFimpl.h"
#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

void func(work::InheritIF* ptr)
{
    assert(ptr);
    double ret = ptr->getValue(0);
    ptr->setValue(0, ret);
}

int main(void)
{
    work::InheritIFimpl impl;
    cout << "sizeof(impl) " << sizeof(impl) << endl;
    func(&impl);
    return 0;
}
