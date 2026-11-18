#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x1510 - 0x54];
    u8 unk_1510;
    u8 pad_1511[7];
    u8 unk_1518[4];
} T_0886D274;

class A_0886D274 {
public:
    virtual s32 *v0(T_0886D274 *, s32);
};

typedef struct {
    s32 unk_00;
    A_0886D274 *unk_04;
    T_0886D274 *unk_08;
    s32 *unk_0C;
} S_0886D274;

extern u8 D_08A44D04[];
T_0886D274 *func_08827A50(s32, s32);
A_0886D274 *func_08827AD4(void);
void func_0886E47C(void *, s32, void *, s32, s32);
void func_0889A4B0(void *);

void func_0886D274(S_0886D274 *arg0, s32 arg1, s32 arg2, void *arg3) {
    T_0886D274 *p;

    if ((p = func_08827A50(0x1DF0, arg2)) != NULL) {
        func_0886E47C(p, arg2, arg3, 0, -1);
        p->unk_50 = D_08A44D04;
        p->unk_1510 = 0;
        func_0889A4B0(p->unk_1518);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = p;
    arg0->unk_0C = arg0->unk_04->v0(p, arg0->unk_00);
    *arg0->unk_0C = 1;
}

}
