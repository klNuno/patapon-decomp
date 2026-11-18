#include "common.h"

typedef struct T0888C998 {
    struct T0888C998 *unk_00;
    struct T0888C998 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T0888C998;

extern u8 D_08A45564[];
extern u8 D_08A45574[];

void func_0888C414(s32 *, T0888C998 *);
void func_0888C40C(s32 *, T0888C998 *);
s32 func_0888C350(s32 *, s32 *);
void func_0888C238(s32 *, s32 *, s32);
void func_0888C3A4(s32 *, T0888C998 *, s32);

T0888C998 *func_0888C998(T0888C998 *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;

    arg0->unk_24 = D_08A45574;
    arg0->unk_1C = D_08A45564;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_0888C414(&it, arg0);
    func_0888C40C(&end, arg0);
    while (func_0888C350(&it, &end)) {
        func_0888C238(&tmp, &it, 0);
        func_0888C3A4(&r, arg0, tmp);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
