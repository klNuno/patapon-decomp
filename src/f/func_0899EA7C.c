#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x24];
} E_0899EA7C;

typedef struct Obj_0899EA7C {
    struct Obj_0899EA7C *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 unk_14;
    u8 pad_15[3];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    void *unk_24;
    E_0899EA7C unk_28[18];
} Obj_0899EA7C;

void func_0880406C(void *, void *, void *, s32, s32);
void func_0899EB90(void *);
void func_0899EB24(void *);
extern u8 D_08A44AD8[];

Obj_0899EA7C *func_0899EA7C(Obj_0899EA7C *arg0) {
    u32 i;

    arg0->unk_00 = NULL;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_24 = D_08A44AD8;
    arg0->unk_20 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_1C = 0;
    arg0->unk_18 = 0;
    func_0880406C(arg0->unk_28, func_0899EB90, func_0899EB24, 0x28, 0x12);
    arg0->unk_00 = arg0;
    for (i = 0; i < 0x12; i++) {
        arg0->unk_28[i].unk_00 = arg0;
    }
    return arg0;
}
