#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_0889DFE0;

typedef struct {
    u8 pad_00[0xC];
    Vec_0889DFE0 unk_0C;
} Base_0889DFE0;

typedef struct {
    u8 pad_00[0xC];
    Base_0889DFE0 unk_0C;
    u8 unk_20[0x60];
    void *unk_80;
} Obj_0889DFE0;

extern u8 D_08A4595C[];

void func_0880416C(void *);
void func_0889EA78(void *, s32);

Obj_0889DFE0 *func_0889DFE0(Obj_0889DFE0 *arg0, s16 arg1) {
    Base_0889DFE0 *b;
    s32 *p;
    Vec_0889DFE0 *vp;
    s32 *sp;

    if (arg0 != NULL) {
        arg0->unk_80 = D_08A4595C;
        func_0889EA78(arg0->unk_20, -1);
        b = &arg0->unk_0C;
        if (b != NULL) {
            p = arg0->unk_0C.unk_0C.unk_00;
            vp = &arg0->unk_0C.unk_0C;
            if ((u32)p != (u32)(p + arg0->unk_0C.unk_0C.unk_04)) {
                sp = &arg0->unk_0C.unk_0C.unk_04;
                do {
                    p++;
                } while (p != vp->unk_00 + *sp);
            }
            arg0->unk_0C.unk_0C.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
