#include "common.h"

typedef struct {
    u8 pad_00[0x6D2E4];
    s32 unk_6D2E4;
    s32 unk_6D2E8;
} Obj_08998D30;

extern u8 *D_08AD1F14[];

void func_088D450C(s32, s32);
void func_089991B0(Obj_08998D30 *);
s32 func_089A8B5C(u8 *, s32, s32);
s32 func_089990C8(Obj_08998D30 *);
void func_089992CC(Obj_08998D30 *);

void func_08998DC8(Obj_08998D30 *arg0) {
    u8 *p;

    if (func_089990C8(arg0) != 0) {
        if (arg0->unk_6D2E8 == 0) {
            func_089991B0(arg0);
        }
        if (arg0->unk_6D2E4 != 0x18) {
            arg0->unk_6D2E4 = 0x18;
            p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
            func_088D450C(arg0->unk_6D2E8, func_089A8B5C(p + 0x2460, 2, 0x18));
        }
    } else {
        func_089992CC(arg0);
    }
}
