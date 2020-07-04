#include "TemplateIF.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    work::TemplateIF impl;
    cout << "sizeof(impl) " << sizeof(impl) << endl;
    impl.operate1(0);
    impl.operate2(0);

    return 0;
}