#include "InheritIFimpl.hpp"

#include <iostream>
#include <array>

namespace work {

using std::cout;
using std::endl;
using std::array;

InheritIFimpl::InheritIFimpl() : mem_()
{
}

InheritIFimpl::~InheritIFimpl()
{
}

double InheritIFimpl::getValue(int index)
{
    (void)index;
    cout << "InheritIFimpl::getValue()" << endl;
    return 1.0;
}

void InheritIFimpl::setValue(int index, double arg)
{
    (void)index;
    (void)arg;
    cout << "InheritIFimpl::setValue()" << endl;
}

} // namespace work
