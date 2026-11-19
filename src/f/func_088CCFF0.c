#include "common.h"

typedef struct {
    s32 unk_00;
} I088CCFF0;

typedef struct L_088CD20C {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} L_088CD20C;

typedef struct N_088CD20C N_088CD20C;

void func_088CCCF8(s32 *, s32 *, s32);
s32 func_088CD18C(s32 *);
void func_088CD060(L_088CD20C *, N_088CD20C *);
f32 *func_088CD050(f32 *, f32 *);

void func_088CCFF0(L_088CD20C *arg0) {
    f32 out;
    volatile I088CCFF0 temp;
    I088CCFF0 it;
    s32 next;

    temp.unk_00 = arg0->unk_04;
    it = temp;
    func_088CCCF8(&next, &it.unk_00, 0);
    func_088CD060(arg0, (N_088CD20C *)func_088CD18C(&next));
    func_088CD050(&out, (f32 *)&it);
}
