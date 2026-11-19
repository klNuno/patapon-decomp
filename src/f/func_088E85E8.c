#include "common.h"

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
extern void func_0887FC60(f32, void *);

typedef struct {
    u8 pad_00[0x36B08];
    u8 *unk_36B08;
} Sub;

typedef struct {
    u8 pad_00[0x14];
    Sub *unk_14;
} Obj;

void func_088E85E8(Obj *arg0, void *arg1)
{
    f32 temp = *func_0885356C(arg1, 0, 1, 4);
    func_0887FC60(temp, arg0->unk_14->unk_36B08 + 0x1A00);
    func_08852F00(arg1, 0);
}
