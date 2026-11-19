#include "common.h"

void func_088BFC38(void *);
void func_088BFF18(void *, s32 *, s32);
void func_088BFF54(void *, char *);
extern char D_089FB5F4[];

typedef struct {
    u8 pad_00[0xC];
    u16 unk_0C;
} U;

typedef struct {
    u8 pad_00[0x90];
    s32 *unk_90;
    s32 unk_94;
    s32 unk_98;
    U *unk_9C;
    u8 pad_A0[8];
    u8 unk_A8[1];
} T;

void func_088C01F8(T *arg0)
{
    U *temp = arg0->unk_9C;
    if (temp != 0) {
        u16 value = temp->unk_0C;
        if (value == 0x5D0 || value == 0x4A0) {
            func_088BFF18(arg0->unk_A8, arg0->unk_90 + arg0->unk_94, arg0->unk_98);
            func_088BFF54(arg0->unk_A8, D_089FB5F4);
        }
        func_088BFC38(arg0->unk_A8);
    }
}
