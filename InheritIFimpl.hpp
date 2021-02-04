#ifndef INHERIT_IF_IMPL_HPP_
#define INHERIT_IF_IMPL_HPP_

#include "InheritIF.hpp"
#include <array>

namespace work {

class InheritIFimpl : public InheritIF {
public:
    InheritIFimpl();
    ~InheritIFimpl();
    double getValue(int index) override;
    void setValue(int index, double arg) override;

private:
    std::array<double, 16> mem_;
};

} // namespace work

#endif
