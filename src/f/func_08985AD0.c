#include "common.h"
typedef struct { u8 pad_00[0x54]; } E;
typedef struct { E *unk_00; u32 unk_04; } V;
typedef struct {
    u8 pad_00[0x2A0C];
    V unk_2A0C;
    u8 pad_2A14[0x34];
    u8 unk_2A48[4];
} T;
extern void func_0880416C(void *);
extern void func_088D6DAC(void *, s32);
T *func_08985AD0(T *arg0, s16 arg1) {
    E *p;
    V *v;
    if (arg0 != NULL) {
        func_088D6DAC(arg0->unk_2A48, -1);
        if ((u8 *)arg0 + 8 != NULL) {
            p = arg0->unk_2A0C.unk_00;
            v = &arg0->unk_2A0C;
            if ((u32)p != (u32)(p + arg0->unk_2A0C.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_2A0C.unk_04);
            }
            arg0->unk_2A0C.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
