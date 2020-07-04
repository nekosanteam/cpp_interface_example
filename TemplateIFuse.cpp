#include "TemplateIF.h"
#include "TemplateIFimpl.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    work::TemplateIF impl;
    cout << "sizeof(impl) " << sizeof(impl) << endl;
    impl.call(0);

    return 0;
}