#include "common.h"

typedef struct {
    u8 pad_00[0x2760];
    void *unk_2760;
} Obj;

extern u8 D_08A466E0[];

void func_08925D14(void *, s32);
void func_089B24BC(void *, s32);
void func_089B2BA8(void *, s32);
void func_089AE65C(void *, s32);
void func_089B3114(void *, s32);
void func_089ADD74(void *, s32);
void func_0880416C(void *);

Obj *func_088F5478(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_2760 = D_08A466E0;
        func_08925D14((u8 *)arg0 + 0x7508, -1);
        func_08925D14((u8 *)arg0 + 0x64B0, -1);
        func_089B24BC((u8 *)arg0 + 0x5D20, -1);
        func_089B2BA8((u8 *)arg0 + 0x4840, -1);
        func_089AE65C((u8 *)arg0 + 0x3980, -1);
        func_089B3114((u8 *)arg0 + 0x2770, -1);
        func_089ADD74(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
