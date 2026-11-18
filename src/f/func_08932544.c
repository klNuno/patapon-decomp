#include "common.h"

typedef struct {
    u8 pad_00[0x44];
} Elem_08932544;

typedef struct {
    Elem_08932544 *unk_00;
    s32 unk_04;
} Vec_08932544;

typedef struct {
    u8 pad_00[0x114];
    Vec_08932544 unk_114;
} Obj_08932544;

s32 func_088804C0(Elem_08932544 *, s32);

void func_08932544(Obj_08932544 *arg0) {
    Elem_08932544 *p;
    Vec_08932544 *v;
    s32 *n;

    p = arg0->unk_114.unk_00;
    v = &arg0->unk_114;
    if ((u32)p != (u32)(p + arg0->unk_114.unk_04)) {
        n = &arg0->unk_114.unk_04;
        do {
            if (p != NULL) {
                func_088804C0(p, -1);
            }
            p++;
        } while (p != v->unk_00 + *n);
    }
    arg0->unk_114.unk_04 = 0;
}
