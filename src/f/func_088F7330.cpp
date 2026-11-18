#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

extern u8 D_08A4535C[];

class E_088F7330 {
public:
    s32 unk_00;
    s32 unk_04;
    E_088F7330 *unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;

    E_088F7330() {
        unk_1C = D_08A4535C;
        unk_00 = 0;
        unk_04 = 0;
        unk_08 = NULL;
        unk_0C = 0;
        unk_20 = 0;
        unk_24 = 0;
        unk_28 = 0;
        unk_2C = 0;
        unk_08 = this;
    }
};

class A_088F7330 {
public:
    virtual E_088F7330 *v0(u32, s32);
};

typedef struct {
    E_088F7330 *unk_00;
    s32 unk_04;
    A_088F7330 *unk_08;
} S_088F7330;

S_088F7330 *func_088F7330(S_088F7330 *arg0, s32 arg1, A_088F7330 **arg2) {
    E_088F7330 *p;
    E_088F7330 *end;

    arg0->unk_00 = NULL;
    arg0->unk_04 = arg1;
    arg0->unk_08 = *arg2;
    if (arg0->unk_04 != 0) {
        p = arg0->unk_00 = arg0->unk_08->v0(arg0->unk_04 * sizeof(E_088F7330), 0x10);
        end = p + arg0->unk_04;
        do {
            new (p++) E_088F7330();
        } while (p != end);
    }
    return arg0;
}

}
