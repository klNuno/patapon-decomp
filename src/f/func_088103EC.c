#include "common.h"

typedef struct {
    s32 unk_00;
    u32 unk_04;
} Obj_088103EC;

u32 *func_0880F690(Obj_088103EC *);
void *func_088104B4(Obj_088103EC *);
s32 func_088104C8(Obj_088103EC *, u32);
void func_08811F2C(Obj_088103EC *, u32);
void func_0881F5C0(void *, s32, s32);

void func_088103EC(Obj_088103EC *arg0, u32 arg1) {
    struct { Obj_088103EC *unk_00; } h;

    h.unk_00 = arg0;
    if ((!(arg1 > *func_0880F690(h.unk_00)) && !(h.unk_00->unk_04 > *func_0880F690(h.unk_00) - arg1)) ||
        func_088104C8(h.unk_00, h.unk_00->unk_04 + arg1 - *func_0880F690(h.unk_00)) != 0) {
        func_0881F5C0(func_088104B4(h.unk_00), 0, arg1 * 4);
        h.unk_00->unk_04 += arg1;
    } else {
        func_08811F2C(h.unk_00, arg1);
    }
}
