#include "common.h"

typedef struct Elem_089302A4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} Elem_089302A4;

typedef struct Obj_089302A4 {
    u8 pad_00[0x90];
    struct Obj_089302A4 *unk_90;
    s32 unk_94;
    Elem_089302A4 unk_98[6];
} Obj_089302A4;

void func_08866028(Obj_089302A4 *);

void func_089302A4(Obj_089302A4 *arg0) {
    s32 i;

    func_08866028(arg0);
    arg0->unk_94 = -1;
    arg0->unk_90 = arg0;
    for (i = 0; i < 6; i++) {
        arg0->unk_98[i].unk_00 = 0;
        arg0->unk_98[i].unk_04 = -1;
        arg0->unk_98[i].unk_08 = 0;
        arg0->unk_98[i].unk_0C = 0;
    }
}
