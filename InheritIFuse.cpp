#include "InheritIF.h"
// InheritIF を使う側の例。抽象クラスの InheritIF のみインクルードすればよい。

namespace work {

class InheritIFuser {
public:
    explicit InheritIFuser(InheritIF& iface) : iface_(iface) {}
    ~InheritIFuser() {};

    void call();

private:
    InheritIF& iface_;
};

void InheritIFuser::call(void)
{
    double ret = iface_.getValue(0);
    iface_.setValue(0, ret);
}

}

#include "InheritIFimpl.h"
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
