#ifndef STUB_IF_H_
#define STUB_IF_H_

namespace work {

class StubIF {
public:
    static void process1(int arg);
    void process2(int arg);

public:
    static int  memory[16];
};

class StubIF2 {
    friend StubIF;

private:
    static void process3(int arg);
};

}

static inline void StubIFprocess1(int arg) {
    work::StubIF::process1(arg);
}

#endif // STUB_IF_H_
