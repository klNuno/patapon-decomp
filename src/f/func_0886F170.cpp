#include "common.h"

extern "C" {

class O_0886F170 {
public:
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    O_0886F170 *unk_0C;
    u8 pad_10[0x40];

    virtual void v0();
    virtual void v1();
    virtual bool v2();
    virtual s32 v3(s32);
    virtual s32 v4(s32);
    virtual void v5();
    virtual void v6();
    virtual bool v7();
    virtual void v8();
    virtual void v9();
    virtual O_0886F170 *v10(s32);
    virtual void v11();
};

s32 func_088586E8(void);
s32 func_089B53D8(s32);
extern s32 func_088148F0(s32, s32);
void func_08878204(s32);

s32 func_0886F170(O_0886F170 *arg0, s32 arg1) {
    s32 r;

    r = 0x10000;
    if (arg0->unk_08 != -1) {
        if (arg0->v7() == 1) {
            func_088148F0(0, 0);
            arg0->v11();
            arg0->unk_04 = -1;
            func_08878204(func_089B53D8(func_088586E8()));
            if (arg0->unk_08 >= 0) {
                arg0->unk_0C = arg0->v10(arg0->unk_08);
            }
            if (arg0->unk_0C != NULL) {
                arg0->unk_0C->v1();
                arg0->unk_04 = arg0->unk_08;
            }
            arg0->unk_08 = -1;
        }
    } else if (arg0->unk_00 == 1) {
        if (arg0->unk_0C != NULL) {
            if (arg0->unk_0C->v2() == 1) {
                arg0->v8();
                arg0->unk_00 = 0;
            }
        } else {
            arg0->unk_00 = 0;
        }
    }
    if (arg0->unk_0C != NULL) {
        r = arg0->unk_0C->v4(arg1);
        if (r == 0x10000) {
            r = arg0->unk_0C->v3(arg1);
        }
    }
    return r;
}

}
