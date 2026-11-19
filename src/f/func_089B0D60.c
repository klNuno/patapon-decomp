#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} Elem_089B31A8;

typedef struct {
    u8 pad_00[0x11F8];
    Elem_089B31A8 *unk_11F8;
} Obj_089B31A8;

typedef struct S S;

s32 func_089B1314(s32);
void *func_089B3620(Obj_089B31A8 *, s32);
void func_089AF428(S *arg0, s32 arg1);

void func_089B0D60(Obj_089B31A8 *arg0, s32 arg1) {
    void *temp = func_089B3620(arg0, 5);
    func_089AF428((S *)temp, func_089B1314(((Elem_089B31A8 *)((u8 *)arg0->unk_11F8 + arg1 * 0x10))->unk_08));
}
