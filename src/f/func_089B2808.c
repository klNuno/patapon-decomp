#include "common.h"

typedef struct {
    u8 pad_00[0x64];
} Elem_089B2808;

typedef struct {
    Elem_089B2808 *unk_00;
    s32 unk_04;
} Vec_089B2808;

typedef struct {
    u8 pad_00[0x1910];
    Vec_089B2808 unk_1910;
} Obj_089B2808;

void func_0880416C(void *);

Obj_089B2808 *func_089B2808(Obj_089B2808 *arg0, s16 arg1) {
    Elem_089B2808 *p;
    Vec_089B2808 *v;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            v = &arg0->unk_1910;
            p = arg0->unk_1910.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_1910.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_1910.unk_04);
            }
            arg0->unk_1910.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
