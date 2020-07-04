#include "InheritIFimpl.h"
#include <iostream>

using std::cout;
using std::endl;

namespace work {

// 本来このデストラクタは InheritIF の利用者側が合わせて定義しておくべき。
InheritIF::~InheritIF()
{
}

InheritIFimpl::InheritIFimpl()
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
