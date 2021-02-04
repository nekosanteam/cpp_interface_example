#ifndef INHERIT_IF_USER_HPP_
#define INHERIT_IF_USER_HPP_

#include "InheritIF.hpp"

namespace work {

class InheritIFuser {
public:
    explicit InheritIFuser(InheritIF& iface) : iface_(iface) {}
    ~InheritIFuser() {};

    void call();

private:
    InheritIF& iface_;
};

} // namespace work

#endif 
