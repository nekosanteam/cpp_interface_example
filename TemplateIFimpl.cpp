#include "TemplateIF.h"
#include <iostream>

using std::cout;
using std::endl;

namespace work {

void TemplateIFImpl::operate1(int arg)
{
    (void)arg;
    cout << "TemplateIFImpl::operate1()" << endl;
    return;
}

void TemplateIFImpl::operate2(int arg)
{
    (void)arg;
    cout << "TemplateIFImpl::operate2()" << endl;
    return;
}

}
