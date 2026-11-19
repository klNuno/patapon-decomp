#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    void *unk_20;
    void *unk_24;
} Obj;

void *func_088A88C0(void);
void *func_0884E64C(void *);
void func_0884EBE8(void *, s32, s32);
s32 func_088D3654(Obj *, s32, s32);
void func_08944AA0(void *, void *, s32, s32, s32, s32);

void func_088D35D4(Obj *arg0, s32 arg1, s32 arg2)
{
    s32 temp;
    s32 n = 1;

    func_0884EBE8(func_0884E64C(func_088A88C0()), 0x12, arg1);
    temp = func_088D3654(arg0, arg1, arg2);
    func_08944AA0(arg0->unk_24, arg0->unk_20, temp, n, n, -1);
}
