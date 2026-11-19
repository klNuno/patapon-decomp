#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
extern void func_0898A2E0(void *);

struct U {
    u8 pad_00[0x1212D0];
    u8 unk_1212D0;
};

struct T {
    u8 pad_00[0x10];
    U *unk_10;
};

void func_08905F7C(T *arg0, void *arg1) {
    func_0898A2E0(&arg0->unk_10->unk_1212D0);
    func_08852F00(arg1, 0);
}

}
