#include "common.h"

extern "C" {

class B_08813190 {
public:
    virtual void v0(s32);
    virtual void v1(void);
    virtual void v2(void);
};

class C_08813190 : public B_08813190 {
public:
    s32 unk_04;
    s32 unk_08;
};

void func_08813190(C_08813190 *arg0) throw() {
    if (--arg0->unk_04 == 0) {
        arg0->v2();
    }
    if (--arg0->unk_08 == 0 && arg0 != NULL) {
        arg0->v0(1);
    }
}

}
