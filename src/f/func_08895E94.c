#include "common.h"

typedef struct Obj_08895E94 {
    struct Obj_08895E94 *unk_00;
    struct Obj_08895E94 *unk_04;
    u8 pad_08[0x1C - 0x8];
    u8 *unk_1C;
    s32 unk_20;
    u8 *unk_24;
} Obj_08895E94;

void func_0880416C(void *);
void func_08895F6C(void *);
s32 func_08896300(s32 *, s32 *);
void func_08896354(s32 *, Obj_08895E94 *, s32);
void func_088963BC(s32 *, s32 *, s32);
void func_088963E4(s32 *, Obj_08895E94 *);
void func_088963EC(s32 *, Obj_08895E94 *);
extern u8 D_08A45774[];
extern u8 D_08A45784[];

Obj_08895E94 *func_08895E94(Obj_08895E94 *arg0, s16 arg1) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A45784;
        func_088963EC(&sp1C, arg0);
        func_088963E4(&sp18, arg0);
        while (func_08896300(&sp1C, &sp18) != 0) {
            func_088963BC(&sp10, &sp1C, 0);
            func_08896354(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A45774;
            func_08895F6C(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
