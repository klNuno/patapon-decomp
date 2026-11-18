#include "common.h"

typedef struct {
    u8 pad_00[0x38];
} Elem_0893FF34;

typedef struct {
    Elem_0893FF34 *unk_00;
    s32 unk_04;
} Vec_0893FF34;

typedef struct {
    u8 pad_00[0x1EB0];
    Vec_0893FF34 unk_1EB0;
} Obj_0893FF34;

void func_0893FD00(Elem_0893FF34 *, s32);

void func_0893FF34(Obj_0893FF34 *arg0) {
    Elem_0893FF34 *p;
    Vec_0893FF34 *vp;
    s32 *sp;

    p = arg0->unk_1EB0.unk_00;
    vp = &arg0->unk_1EB0;
    if ((u32)p != (u32)(p + arg0->unk_1EB0.unk_04)) {
        sp = &arg0->unk_1EB0.unk_04;
        do {
            if (p != NULL) {
                func_0893FD00(p, -1);
            }
            p++;
        } while (p != vp->unk_00 + *sp);
    }
    arg0->unk_1EB0.unk_04 = 0;
}
