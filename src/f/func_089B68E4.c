#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x94];
    u8 unk_A4[0x848C];
    u8 unk_8530[0x94];
    u8 unk_85C4[0x848C];
    void *unk_10A50;
} Obj_089B68E4;

extern u8 D_08A48B14[];

void func_089B6988(u8 *);
void func_089B6828(u8 *, s32);
void func_08870834(u8 *, s32);
void func_08865F78(u8 *, s32);
void func_0880416C(Obj_089B68E4 *);

Obj_089B68E4 *func_089B68E4(Obj_089B68E4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_A4 != NULL) {
            arg0->unk_10A50 = D_08A48B14;
            func_089B6988(arg0->unk_A4);
            func_089B6828(arg0->unk_85C4, -1);
            func_08870834(arg0->unk_8530, -1);
            func_089B6828(arg0->unk_A4, -1);
        }
        func_08865F78(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
