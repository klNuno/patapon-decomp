#include "common.h"
typedef struct { u8 pad_00[0x8]; } E;
typedef struct { E *unk_00; u32 unk_04; } V;
typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x670];
    u8 unk_680[0x164];
    V unk_7E4;
} T;
extern void func_0880416C(void *);
extern void func_08804000(void *, void (*)(void *, s32), s32, s32);
extern void func_08865F78(void *, s32);
extern void func_0899D318(void *, s32);
T *func_0899D42C(T *arg0, s16 arg1) {
    E *p;
    V *v;
    if (arg0 != NULL) {
        if ((u8 *)arg0 + 0x760 != NULL) {
            p = arg0->unk_7E4.unk_00;
            v = &arg0->unk_7E4;
            if ((u32)p != (u32)(p + arg0->unk_7E4.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_7E4.unk_04);
            }
            arg0->unk_7E4.unk_04 = 0;
        }
        func_08865F78(arg0->unk_680, -1);
        func_08804000(arg0->unk_10, func_0899D318, 0x220, 3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
