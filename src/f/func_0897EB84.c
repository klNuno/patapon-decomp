#include "common.h"

typedef struct {
    u8 pad_00[0x2760];
    void *unk_2760;
    u8 pad_2764[0xC];
    u8 unk_2770[0x10];
    u8 unk_2780[0x1240];
    u8 unk_39C0[0x758];
    u8 unk_4118[0x4];
} Obj_0897EB84;

extern s32 D_08A480AC[];

void func_0880416C(void *);
void func_08925D14(void *, s32);
void func_089458C8(void *, s32);
void func_089ADD74(void *, s32);
void func_089AF1C4(void *, s32);
void func_089B0BC0(void *, s32);

Obj_0897EB84 *func_0897EB84(Obj_0897EB84 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_2760 = D_08A480AC;
        func_08925D14(arg0->unk_4118, -1);
        func_089AF1C4(arg0->unk_39C0, -1);
        func_089B0BC0(arg0->unk_2780, -1);
        func_089458C8(arg0->unk_2770, -1);
        func_089ADD74(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
