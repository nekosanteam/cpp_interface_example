#ifndef TEMPLATE_IF_H_
#define TEMPLATE_IF_H_

namespace work {

template <typename T>
class TemplateIFTmpl : private T {
public:
    inline void operate1(int arg) {
        T::operate1(arg);
        return;
    }
    inline void operate2(int arg) {
        T::operate2(arg);
        return;
    }
};

class TemplateIFImpl {
public:
    void operate1(int arg);
    void operate2(int arg);
};

using TemplateIF = TemplateIFTmpl<TemplateIFImpl>;

}

#endif // TMPLIF_H_
