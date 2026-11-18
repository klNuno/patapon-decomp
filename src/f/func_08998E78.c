#include "common.h"

typedef struct {
    u8 pad_00[0x21E0];
    char unk_21E0[0x6B104];
    s32 unk_6D2E4;
    s32 unk_6D2E8;
} Obj_08998D30;

extern u8 *D_08AD1F14[];

void func_088D450C(s32, s32);
void func_089991B0(Obj_08998D30 *);
s32 func_089A8B5C(u8 *, s32, s32);
s32 func_089990C8(Obj_08998D30 *);
s32 func_0899904C(Obj_08998D30 *);
char *func_08995710(char *);
s32 func_08996818(char *);

void func_08998E78(Obj_08998D30 *arg0) {
    s32 s;
    s32 v;
    u8 *p;

    if (func_08996818(func_08995710(arg0->unk_21E0)) == 3) {
        return;
    }
    s = func_0899904C(arg0);
    v = func_089990C8(arg0);
    if (s == 3) {
        if (arg0->unk_6D2E8 == 0) {
            func_089991B0(arg0);
        }
        if (arg0->unk_6D2E4 != 0x1B) {
            arg0->unk_6D2E4 = 0x1B;
            p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
            func_088D450C(arg0->unk_6D2E8, func_089A8B5C(p + 0x2460, 2, 0x1B));
        }
    } else if (v == 0) {
        if (arg0->unk_6D2E8 == 0) {
            func_089991B0(arg0);
        }
        if (arg0->unk_6D2E4 != 0x1A) {
            arg0->unk_6D2E4 = 0x1A;
            p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
            func_088D450C(arg0->unk_6D2E8, func_089A8B5C(p + 0x2460, 2, 0x1A));
        }
    } else {
        if (arg0->unk_6D2E8 == 0) {
            func_089991B0(arg0);
        }
        if (arg0->unk_6D2E4 != 0x19) {
            arg0->unk_6D2E4 = 0x19;
            p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
            func_088D450C(arg0->unk_6D2E8, func_089A8B5C(p + 0x2460, 2, 0x19));
        }
    }
}
