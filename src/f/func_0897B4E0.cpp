#include "common.h"

extern "C" {

struct Obj_0897B4E0_M {
    virtual void v0();
    virtual void v1(s32, s32, s32);
};

typedef struct {
    u8 pad_00[0xA2C];
    Obj_0897B4E0_M *unk_A2C;
    u8 unk_A30;
} Obj_0897B4E0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Obj_0897B4E0_T;

void func_0886E258(void *, s32);
void func_0897B590(void *, void *);
void *func_0897B5A8(Obj_0897B4E0_T *, s32, s32);
void *func_0897B5B8(void *, s32 *);
void func_0897B780(void *, s32);

void func_0897B4E0(Obj_0897B4E0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp2C;
    Obj_0897B4E0_T sp24;

    if (arg2 != 0) {
        func_0897B780(arg0, arg1);
        arg0->unk_A2C->v1(arg1, arg2, arg3);
        sp2C = arg1;
        func_0886E258(arg0, arg1);
        func_0897B590(func_0897B5B8((u8 *)arg0 + 4, &sp2C), func_0897B5A8(&sp24, arg2, arg3));
        arg0->unk_A30 = 1;
    }
}

}
