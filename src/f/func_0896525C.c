#include "common.h"

typedef struct {
    s32 unk_00;
} I0896525C;

typedef struct L_0896525C {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} L_0896525C;

typedef struct N_0896525C N_0896525C;

void func_08963858(s32 *, s32 *, s32);
s32 func_08963850(s32 *);
void func_089634E8(L_0896525C *, N_0896525C *);
f32 *func_08963840(f32 *, f32 *);

void func_0896525C(L_0896525C *arg0) {
    f32 out;
    volatile I0896525C temp;
    I0896525C it;
    s32 next;

    temp.unk_00 = arg0->unk_04;
    it = temp;
    func_08963858(&next, &it.unk_00, 0);
    func_089634E8(arg0, (N_0896525C *)func_08963850(&next));
    func_08963840(&out, (f32 *)&it);
}
