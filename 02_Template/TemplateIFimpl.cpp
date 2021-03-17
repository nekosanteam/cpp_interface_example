#include "TemplateIFimpl.h"
#include <cstdint>
#include <array>
#include <iostream>

namespace work {

using std::uint16_t;
using std::array;
using std::cout;
using std::endl;

array<uint16_t, 32> gBuffer;

void TemplateIFimpl::operate1(int arg)
{
    (void)arg;
    gBuffer[0] = gBuffer[0] + 1;
    cout << "TemplateIFimpl::operate1(); " << gBuffer[0] << ";" << endl;
    return;
}

void TemplateIFimpl::operate2(int arg)
{
    (void)arg;
    gBuffer[1] = gBuffer[1] + 1;
    cout << "TemplateIFimpl::operate2(); " << gBuffer[1] << ";" << endl;
    return;
}

}
