#include "common.h"

typedef struct Unk_089CA058_Local {
    u8 pad_00[0x50];
} Unk_089CA058_Local;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[8];
} T1;

typedef struct {
    u8 pad_00[0xBC0];
    s32 unk_BC0;
} T2;

extern s32 D_089F29D4[];
extern f32 D_089F29E8[];
extern f32 D_089F29EC[];
void func_08855354(char *);
extern int func_08864E80(char *, char *);
void func_08866464(Unk_089CA058_Local *, char *, s32);
char *func_08985828(s32, s32);

void func_089C1924(T2 *arg0, s32 arg1, s32 arg2) {
    Unk_089CA058_Local temp;
    T1 temp2;
    char *p;
    s32 n;
    f32 x, y, z, w;
    u32 i = arg1 - 8;
    if (i < 3U) {
        arg0->unk_BC0 = i;
        p = func_08985828((s32)arg0, 0);
        func_08866464(&temp, p, D_089F29D4[arg0->unk_BC0]);
        func_08864E80(func_08985828((s32)arg0, 1), (char *)&temp);
        return;
    }
    arg0->unk_BC0 = -1;
    n = 0;
    if (arg2 == 0) {
        p = (char *)&temp2;
        goto next;
    }
    if (arg2 == 2) {
        n = 1;
    } else if (arg2 == 4) {
        n = 2;
    } else {
        n = 0;
    }
    p = (char *)&temp2;
next:
    func_08855354(p);
    w = (f32)n;
    x = 100.0f;
    y = *(volatile f32 *)D_089F29E8;
    x *= w;
    z = *(volatile f32 *)D_089F29EC;
    temp2.unk_34 = z;
    temp2.unk_30 = y + x;
    func_08864E80(func_08985828((s32)arg0, 1), (char *)&temp2);
}
