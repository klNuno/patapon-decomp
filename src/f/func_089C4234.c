#include "common.h"

typedef struct Obj_089C4234 {
    struct Obj_089C4234 *unk_00;
    struct Obj_089C4234 *unk_04;
    u8 pad_08[0x1C - 0x8];
    u8 *unk_1C;
    s32 unk_20;
    u8 *unk_24;
} Obj_089C4234;

void func_0880416C(void *);
void func_089C352C(void *);
s32 func_089C430C(s32 *, s32 *);
void func_089C4360(s32 *, Obj_089C4234 *, s32);
void func_089C43C8(s32 *, s32 *, s32);
void func_089C43F0(s32 *, Obj_089C4234 *);
void func_089C43F8(s32 *, Obj_089C4234 *);
extern u8 D_08A48CD4[];
extern u8 D_08A48CE4[];

Obj_089C4234 *func_089C4234(Obj_089C4234 *arg0, s16 arg1) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A48CE4;
        func_089C43F8(&sp1C, arg0);
        func_089C43F0(&sp18, arg0);
        while (func_089C430C(&sp1C, &sp18) != 0) {
            func_089C43C8(&sp10, &sp1C, 0);
            func_089C4360(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A48CD4;
            func_089C352C(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
