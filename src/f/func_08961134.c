#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
} A;

typedef struct {
    u8 pad_00[0x1F8];
    void *unk_1F8;
} B;

typedef struct {
    u8 pad_00[0xD0];
    A *unk_D0;
    u8 pad_D4[0x40];
    B *unk_114;
} Obj;

void func_088F5990(void *, s32);

s32 func_08961134(Obj *arg0)
{
    A *a = arg0->unk_D0 != NULL ? arg0->unk_D0 : NULL;

    if (a->unk_50 != NULL) {
        B *b = arg0->unk_114;
        if (b == NULL) {
            return 0;
        }
        if (b != NULL) {
            b->unk_1F8 = arg0;
            func_088F5990(arg0->unk_114, 0);
        }
    }
    return 1;
}
