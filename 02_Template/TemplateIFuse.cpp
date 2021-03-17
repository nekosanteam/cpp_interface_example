#include "TemplateIF.h"
#include "TemplateIFimpl.h"
#include <iostream>

using std::cout;
using std::endl;
using work::TemplateIF;

int main(void)
{
    TemplateIF impl;
    cout << "sizeof(impl) " << sizeof(impl) << endl;
    impl.call(0);
    impl.call(0);

    return 0;
}