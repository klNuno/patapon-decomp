#include "common.h"

extern "C" {
struct T {
    s32 unk_00;
    virtual void unk_08(s32 arg1);
};

void func_08807A88(T *arg0) {
    arg0->unk_08(-1);
}
}
