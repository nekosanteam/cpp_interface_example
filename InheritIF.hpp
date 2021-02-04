#ifndef INHERIT_IF_HPP_
#define INHERIT_IF_HPP_

namespace work {

class InheritIF {
public:
    InheritIF() = default;
    virtual ~InheritIF() = default;

    virtual double getValue(int index) = 0;
    virtual void   setValue(int index, double arg) = 0;
};

} // namespace work

#endif
