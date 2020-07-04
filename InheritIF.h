#ifndef INHERIT_IF_H_
#define INHERIT_IF_H_

namespace work {

class InheritIF {
public:
    InheritIF() {};
    virtual ~InheritIF() = 0;

    virtual double getValue(int index) = 0;
    virtual void setValue(int index, double arg) = 0;
};

}

#endif
