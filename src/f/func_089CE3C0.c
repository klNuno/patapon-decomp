#include "common.h"

extern u8 D_08A48E78[];

typedef struct Obj_089CE3C0 {
    void *unk_00;
    u8 pad_04[0x4];
    u8 unk_08[0x10A3C];
    u8 unk_10A44[0x2D0];
    u8 unk_10D14[4];
} Obj_089CE3C0;

void func_0880416C(void *);
void func_08913F9C(void *, s32);
void func_089B55EC(void *, s32);
void func_089D0D04(void *, s32);

Obj_089CE3C0 *func_089CE3C0(Obj_089CE3C0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A48E78;
        func_08913F9C(arg0->unk_10D14, -1);
        func_089B55EC(arg0->unk_10A44, -1);
        func_089D0D04(arg0->unk_08, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
