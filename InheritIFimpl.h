#ifndef INHERIT_IF_IMPL_H_
#define INHERIT_IF_IMPL_H_

#include "InheritIF.h"

namespace work {

class InheritIFimpl : public InheritIF {
public:
    InheritIFimpl();
    ~InheritIFimpl() override;
    double getValue(int index) override;
    void setValue(int index, double arg) override;
};

}

#endif
