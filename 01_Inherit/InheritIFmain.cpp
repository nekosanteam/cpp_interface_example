#include "InheritIFimpl.hpp"
#include "InheritIFuser.hpp"
#include <iostream>
// InheritIFuser と　InheritIFimpl を deploy する役割。

using std::cout;
using std::endl;

int main(void)
{
    work::InheritIFimpl impl;
    work::InheritIFuser user(impl);
    cout << "sizeof(impl) " << sizeof(impl) << endl;
    user.call();

    return 0;
}
