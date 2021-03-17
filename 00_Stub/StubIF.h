#ifndef STUB_IF_H_
#define STUB_IF_H_

namespace work {

class StubIF {
public:
    static void process1(int arg);
    void process2(int arg);

private:
    static int  memory[16];
};

}

#endif // STUB_IF_H_
