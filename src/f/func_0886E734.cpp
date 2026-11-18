#include "common.h"

extern "C" {

struct A0886E734 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886E420(s32, s32);

struct H0886E734 {
    s32 unk_00;
    A0886E734 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return (unk_0C != NULL) ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vfunc_0C(unk_08, *(void **)&unk_0C, unk_00);
                func_0886E420(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} L0886E734;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[8];
    s32 unk_18;
    u8 pad_1C[0x14E4];
    s32 unk_1500;
    u8 pad_1504[0xC];
    u8 unk_1510[1];
} T0886E734;

void func_0886EF7C(H0886E734 *, void *, s32, s32);
void func_0886D5AC(L0886E734 *, H0886E734 *);
void func_0886D4AC(L0886E734 *, s32);
void func_0886D568(L0886E734 *, void *);

s32 func_0886E734(T0886E734 *arg0, s32 arg1) {
    H0886E734 h;
    L0886E734 sp10;
    s32 ret;

    ret = 0;
    if (arg1 >= 0) {
        func_0886EF7C(&h, arg0->unk_1510, arg1, arg0->unk_1500);
        func_0886D5AC(&sp10, &h);
        func_0886D568(&sp10, arg0->unk_10);
        func_0886D4AC(&sp10, -1);
        h.release();
        ret = arg0->unk_18;
    }
    return ret;
}

}
