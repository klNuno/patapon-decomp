#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510;
    u8 pad_1511[0xF];
    u8 unk_1520[4];
} O_0886D0EC;

class H_0886D0EC {
public:
    virtual s32 *func_08(O_0886D0EC *, s32);
};

typedef struct {
    s32 unk_00;
    H_0886D0EC *unk_04;
    O_0886D0EC *unk_08;
    s32 *unk_0C;
} S_0886D0EC;

extern u8 D_08A44D9C[];
O_0886D0EC *func_08827A50(s32, s32);
H_0886D0EC *func_08827AD4(void);
void func_0886E47C(void *, s32, void *, s32, s32);
void func_088AC2A8(void *);

void func_0886D0EC(S_0886D0EC *arg0, s32 arg1, s32 arg2, void *arg3) {
    O_0886D0EC *o;

    if ((o = func_08827A50(0x1860, arg2)) != NULL) {
        func_0886E47C(o, arg2, arg3, 0, -1);
        o->unk_50 = D_08A44D9C;
        o->unk_1510 = 0;
        func_088AC2A8(o->unk_1520);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = o;
    arg0->unk_0C = arg0->unk_04->func_08(o, arg0->unk_00);
    *arg0->unk_0C = 1;
}

}
