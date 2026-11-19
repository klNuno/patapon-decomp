#include "common.h"

typedef struct {
    u8 pad_00[0x160];
    s32 unk_160;
    u8 pad_164[0xB1C];
    s32 unk_C80;
    u8 pad_C84[9];
    u8 unk_C8D;
} T;

typedef struct Unk_089CA058_Local {
    u8 pad_00[0x40];
} Unk_089CA058_Local;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[8];
} M;

char *func_08985828(s32, s32);
void func_0898ABB8(void *, f32, s32, s32);
void func_08866464(Unk_089CA058_Local *, char *, s32);
void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);
extern int func_08864E80(char *, char *);
extern s32 D_08A097A4[];
extern s32 D_08A097B0[];

void func_089C84C8(T *arg0) {
    union { Unk_089CA058_Local unk_00; M unk_00_m; } a;
    M b;
    Unk_089CA058_Local c;
    char *p;
    f32 x;
    f32 y;

    if (++arg0->unk_C80 >= 60) {
        if (arg0->unk_C8D == 0) {
            arg0->unk_C8D = 1;
            p = func_08985828((s32)arg0, 0);
            func_0898ABB8(p, 0.0f, 3, 0);
            p = func_08985828((s32)arg0, 1);
            func_0898ABB8(p, 0.0f, 3, 0);
            p = func_08985828((s32)arg0, 2);
            func_0898ABB8(p, 0.0f, 3, 0);
            p = func_08985828((s32)arg0, 0);
            func_0898ABB8(p, 1.66f, 2, 1);
            p = func_08985828((s32)arg0, 1);
            func_0898ABB8(p, 1.66f, 2, 1);
            func_0898ABB8(func_08985828((s32)arg0, 2), 1.66f, 2, 1);
        }
        if (arg0->unk_C80 >= 73) {
            p = func_08985828((s32)arg0, 2);
            func_08866464(&a.unk_00, p, D_08A097A4[0]);
            p = func_08985828((s32)arg0, 3);
            func_08866B54(&b, 0, func_08866B80(p, 0));
            func_08866B54(&b, 1, func_08866B80(p, 1));
            func_08866B54(&b, 2, func_08866B80(p, 2));
            func_08866B54(&b, 3, func_08866B80(p, 3));
            x = a.unk_00_m.unk_30;
            y = a.unk_00_m.unk_34;
            b.unk_30 = x;
            b.unk_34 = y - 20.0f;
            func_08864E80(func_08985828((s32)arg0, 3), (char *)&b);
            if (arg0->unk_C80 >= 92) {
                p = func_08985828((s32)arg0, 0);
                func_08866464(&c, p, D_08A097B0[0]);
                func_08866B54(&a, 0, func_08866B80(&c, 0));
                func_08866B54(&a, 1, func_08866B80(&c, 1));
                func_08866B54(&a, 2, func_08866B80(&c, 2));
                func_08866B54(&a, 3, func_08866B80(&c, 3));
                func_08864E80(func_08985828((s32)arg0, 3), (char *)&a);
                arg0->unk_C80 = -1;
                arg0->unk_160 = 0;
            }
        }
    }
}
