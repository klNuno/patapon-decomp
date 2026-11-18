#include "common.h"

typedef struct S_0885BA84 {
    struct S_0885BA84 *unk_00;
    struct S_0885BA84 *unk_04;
    u8 pad_08[0x14];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} S_0885BA84;

s32 func_0885BB5C(s32 *, s32 *);
void func_0885BBB0(s32 *, S_0885BA84 *, s32);
void func_0885BD64(s32 *, s32 *, s32);
void func_0885BD8C(s32 *, S_0885BA84 *);
void func_0885BD94(s32 *, S_0885BA84 *);
void func_0885BE48(void *);
void func_0880416C(void *);
extern u8 D_08A449E4[];
extern u8 D_08A44A0C[];

S_0885BA84 *func_0885BA84(S_0885BA84 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 r;
    s32 v;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A44A0C;
        func_0885BD94(&it, arg0);
        func_0885BD8C(&end, arg0);
        while (func_0885BB5C(&it, &end) != 0) {
            func_0885BD64(&v, &it, 0);
            func_0885BBB0(&r, arg0, v);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A449E4;
            func_0885BE48(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
