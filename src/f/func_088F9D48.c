#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
} Unk;

typedef struct {
    u8 pad_00[0x5D4];
    Unk *unk_5D4;
    u32 unk_5D8;
} Obj;

u32 func_088F9D40(Obj *);

void func_088F9D48(Obj *arg0, s32 arg1, f32 arg2)
{
    u32 n = arg0->unk_5D8;
    Unk *p;

    if (n < func_088F9D40(arg0)) {
        p = &arg0->unk_5D4[arg0->unk_5D8];
        if (p != NULL) {
            p->unk_00 = arg1;
            p->unk_04 = arg2;
        }
        arg0->unk_5D8++;
    }
}
