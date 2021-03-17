#include "InheritIFuser.hpp"

// InheritIF を使う側の例。抽象クラスの InheritIF のみインクルードすればよい。
#include "InheritIF.hpp"

namespace work {

void InheritIFuser::call(void)
{
    double ret = iface_.getValue(0);
    iface_.setValue(0, ret);
}

} // namespace work
