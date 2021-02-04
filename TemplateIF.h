#ifndef TEMPLATE_IF_H_
#define TEMPLATE_IF_H_

namespace work {

template <typename T>
class TemplateIFtmpl : private T {
public:
    TemplateIFtmpl() = default;
    TemplateIFtmpl(TemplateIFtmpl&) = delete;
    TemplateIFtmpl& operator=(const TemplateIFtmpl&) = delete;
    TemplateIFtmpl(TemplateIFtmpl&&) = delete;
    TemplateIFtmpl& operator=(const TemplateIFtmpl&&) = delete;
    ~TemplateIFtmpl() = default;

    inline void operate1(int arg) {
        T::operate1(arg);
        return;
    }
    inline void operate2(int arg) {
        T::operate2(arg);
        return;
    }
    inline void call(int arg) {
        this->operate1(arg);
        this->operate2(arg);
        return;
    }
};

class TemplateIFimpl;
using TemplateIF = TemplateIFtmpl<TemplateIFimpl>;

}

#endif // TMPLIF_H_
