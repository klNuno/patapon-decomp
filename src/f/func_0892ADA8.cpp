#include "common.h"

extern "C" {

struct A_0892ADA8 {
    virtual void v0();
    virtual void v1(s32, void *, s32);
};

void func_0886A45C(s32, s32);
void func_0880416C(void *);

struct H_0892ADA8 {
    s32 unk_00;
    A_0892ADA8 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() {
        if (unk_0C != NULL) {
            return *unk_0C;
        } else {
            return 0;
        }
    }
    bool ok() { return this != NULL; }
};

typedef struct {
    u8 pad_00[0x8];
    H_0892ADA8 unk_08;
} S_0892ADA8;

S_0892ADA8 *func_0892ADA8(S_0892ADA8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_08.ok() && arg0->unk_08.ok()) {
            s32 &o = arg0->unk_08.unk_08;
            if (arg0->unk_08.unk_08 != 0) {
                s32 *&c = arg0->unk_08.unk_0C;
                *arg0->unk_08.unk_0C -= 1;
                if (arg0->unk_08.count() == 0) {
                    arg0->unk_08.unk_04->v1(o, *(void **)&c, arg0->unk_08.unk_00);
                    func_0886A45C(o, arg0->unk_08.unk_00);
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
