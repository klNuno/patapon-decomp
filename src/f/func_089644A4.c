#include "common.h"

typedef struct Obj_089644A4 {
    struct Obj_089644A4 *unk_00;
    struct Obj_089644A4 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} Obj_089644A4;

extern u8 D_08A47BD4[];
extern u8 D_08A47BE4[];
void func_08963858(s32 *, s32 *, s32);
s32 func_08963970(s32 *, s32 *);
void func_089639C4(s32 *, Obj_089644A4 *, s32);
void func_08963A2C(s32 *, Obj_089644A4 *);
void func_08963A34(s32 *, Obj_089644A4 *);

Obj_089644A4 *func_089644A4(Obj_089644A4 *arg0) {
    s32 begin;
    s32 end;
    s32 ret;
    s32 tmp;

    arg0->unk_24 = D_08A47BE4;
    arg0->unk_1C = D_08A47BD4;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_08963A34(&begin, arg0);
    func_08963A2C(&end, arg0);
    while (func_08963970(&begin, &end) != 0) {
        func_08963858(&tmp, &begin, 0);
        func_089639C4(&ret, arg0, tmp);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
