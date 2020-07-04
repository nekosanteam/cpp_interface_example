#include "TemplateIFimpl.h"
#include <iostream>

using std::cout;
using std::endl;

namespace work {

void TemplateIFimpl::operate1(int arg)
{
    (void)arg;
    cout << "TemplateIFimpl::operate1()" << endl;
    return;
}

void TemplateIFimpl::operate2(int arg)
{
    (void)arg;
    cout << "TemplateIFimpl::operate2()" << endl;
    return;
}

}
