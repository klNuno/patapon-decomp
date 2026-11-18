#include "common.h"

typedef struct { f32 unk_00, unk_04; } P;
typedef struct { P unk_00; f32 unk_08, unk_0C, unk_10; s32 unk_14; } E;
typedef struct {
    u8 pad_00[0x428];
    u8 unk_428[0xC];
    u32 unk_434;
} T;

s32 func_088586E8(void);
void func_0892535C(s32 *, void *);
u32 func_08925910(T *);
void func_089259F0(void *, s32, E *);
u32 func_089B5464(s32);

void func_08925918(T *arg0, const P *arg1, f32 arg2, f32 arg3) {
    s32 temp;
    struct { E unk_00; u8 pad_18[4]; } e;
    volatile P p;
    u32 n = arg0->unk_434;
    if (n < func_08925910(arg0)) {
        u8 *q = (u8 *)&e;
        s32 i = 0x18;
        if (q != NULL) {
            do {
                *q++ = 0;
            } while (--i);
        }
        *(P *)&p = *arg1;
        e.unk_00.unk_00 = *(const P *)&p;
        e.unk_00.unk_08 = arg2;
        e.unk_00.unk_0C = arg3;
        e.unk_00.unk_10 = arg3;
        e.unk_00.unk_14 = func_089B5464(func_088586E8()) & 1;
        func_0892535C(&temp, arg0->unk_428);
        func_089259F0(arg0->unk_428, temp, &e.unk_00);
    }
}
