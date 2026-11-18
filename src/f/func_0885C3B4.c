#include "common.h"

typedef struct S_0885C3B4 {
    struct S_0885C3B4 *unk_00;
    struct S_0885C3B4 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} S_0885C3B4;

s32 func_0885BB5C(s32 *, s32 *);
void func_0885BBB0(s32 *, S_0885C3B4 *, s32);
void func_0885BD64(s32 *, s32 *, s32);
void func_0885BD8C(s32 *, S_0885C3B4 *);
void func_0885BD94(s32 *, S_0885C3B4 *);
extern u8 D_08A449E4[];
extern u8 D_08A44A0C[];

S_0885C3B4 *func_0885C3B4(S_0885C3B4 *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 v;

    arg0->unk_24 = D_08A44A0C;
    arg0->unk_1C = D_08A449E4;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_0885BD94(&it, arg0);
    func_0885BD8C(&end, arg0);
    while (func_0885BB5C(&it, &end) != 0) {
        func_0885BD64(&v, &it, 0);
        func_0885BBB0(&r, arg0, v);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
