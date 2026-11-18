#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
} Elem_089B31A8;

typedef struct {
    Elem_089B31A8 *unk_00;
} Vec_089B31A8;

typedef struct {
    u8 pad_00[0x11F8];
    Vec_089B31A8 unk_11F8;
} Obj_089B31A8;

void func_089AEBE4(void *, s32);
s32 func_089B1314(s32);
void func_089B2F44(void *, s32);
void *func_089B3620(Obj_089B31A8 *, s32);

void func_089B31A8(Obj_089B31A8 *arg0, s32 arg1) {
    void *temp;
    Vec_089B31A8 *vp;

    temp = func_089B3620(arg0, 3);
    vp = &arg0->unk_11F8;
    func_089AEBE4(temp, func_089B1314(((Elem_089B31A8 *)((u8 *)vp->unk_00 + arg1 * 0x10))->unk_08));
    temp = func_089B3620(arg0, 4);
    func_089B2F44(temp, func_089B1314(((Elem_089B31A8 *)((u8 *)vp->unk_00 + arg1 * 0x10))->unk_08));
}
