#include "common.h"

typedef struct Unk_089CA058_Local {
    u8 pad_00[0x40];
} Unk_089CA058_Local;

typedef struct {
    u8 pad_00[0xECC];
    s32 unk_ECC;
} T1;

extern s32 D_089F3888[];
extern int func_08864E80(char *, char *);
void func_08866464(Unk_089CA058_Local *, char *, s32);
char *func_08985828(s32, s32);
void func_0898ABB8(void *, f32, s32, s32);

void func_089CA27C(T1 *arg0, s32 arg1) {
    Unk_089CA058_Local temp;
    char *p;
    char *q;
    char *p2;
    s32 i;
    s32 *r;
    arg0->unk_ECC = arg1;
    p = func_08985828((s32)arg0, 0);
    func_0898ABB8(p, 0.0f, 0xE, 0);
    func_0898ABB8(p, 1.3f, 6, 1);
    p2 = func_08985828((s32)arg0, 0);
    i = 0;
    if (arg0->unk_ECC > 0) {
        r = D_089F3888;
        do {
            func_08866464(&temp, p2, *r);
            q = func_08985828((s32)arg0, i + 9);
            func_08864E80(q, (char *)&temp);
            func_0898ABB8(q, 0.16f * (f32)i, 2, 0);
            ++i;
            ++r;
        } while (i < arg0->unk_ECC);
    }
}
