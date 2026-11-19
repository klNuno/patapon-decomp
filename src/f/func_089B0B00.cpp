#include "common.h"

struct T {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

extern "C" {
void func_088FCDF4(void *, s32);

void func_089B0B00(void *arg0, T *arg1) {
    if (arg0 != NULL) {
        func_088FCDF4(arg0, -1);
        arg1->unk_10(arg0);
    }
}
}
