#include "common.h"

class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

struct Unk {
    void *unk_00;
    A *unk_04;
};

struct Obj {
    u8 unk_00[4];
    Unk unk_04;
};

extern "C" {
void func_089A9FB8(u8 *);
void func_0880416C(void *);

Obj *func_089A9E08(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        func_089A9FB8(arg0->unk_00);
        if (&arg0->unk_04 != NULL) {
            void *p = arg0->unk_04.unk_00;
            if (p != NULL) {
                arg0->unk_04.unk_04->unk_10(p);
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
}
