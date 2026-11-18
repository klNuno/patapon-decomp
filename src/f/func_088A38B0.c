#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_088A38B0;

typedef struct {
    u8 pad_00[0x14];
    Vec_088A38B0 unk_14;
} Obj_088A38B0;

void func_0880416C(void *);
void func_088A3ED8(Obj_088A38B0 *);

Obj_088A38B0 *func_088A38B0(Obj_088A38B0 *arg0, s16 arg1) {
    s32 *p;
    Vec_088A38B0 *v;

    if (arg0 != NULL) {
        func_088A3ED8(arg0);
        if (arg0 != NULL) {
            v = &arg0->unk_14;
            p = arg0->unk_14.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_14.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_14.unk_04);
            }
            arg0->unk_14.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
