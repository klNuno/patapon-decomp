#include "common.h"

extern "C" {

typedef struct S S;
typedef struct {
    u8 pad_00[0x42820];
    u8 *unk_42820;
} G;
typedef struct {
    u8 pad_00[0x90];
} T;
typedef struct {
    f32 unk_00[3];
} V;

struct S {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[0x11A34];
    u8 unk_11A40[0x2E0];
    T *unk_11D20;
    s32 unk_11D24;
    u8 pad_11D28[8];
    u8 unk_11D30[0x2E0];
    T *unk_12010;
    s32 unk_12014;
    u8 pad_12018[8];
    T unk_12020;
    T unk_120B0;
    T unk_12140;
    S *unk_121D0;
    V unk_121D4;
    u8 unk_121E0;
    s32 unk_121E4;
    s32 unk_121E8;
    S *unk_121EC;
    V unk_121F0;
    u8 unk_121FC;
    s32 unk_12200;
    s32 unk_12204;
    s32 unk_12208;
    s32 unk_1220C;
};

extern void *D_08AD1E28[];
extern f32 D_08A09F30[];
extern f32 D_08A09F38[];
extern f32 D_08A09F40[];
extern f32 D_08A09F44[];

void func_08865EE0(void *);
void func_089CE194(void *, s32, s32, u8 *);

S *func_089D1ED0(S *arg0, s32 arg1, s32 arg2)
{
    volatile f32 temp1[3];
    volatile f32 temp2[3];
    G *g;
    T *p;
    s32 n;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = 0;
    g = (G *)D_08AD1E28[0];
    if (g != NULL) {
        g = (G *)g;
    } else {
        g = NULL;
    }
    func_089CE194(arg0->unk_0C, arg1, arg2, g->unk_42820 + 0x24A1);

    arg0->unk_11D20 = (T *)&((S *)(((u32)arg0->unk_11A40 & 0xF) + (u32)arg0))->unk_11A40;
    n = 5;
    arg0->unk_11D24 = n;
    p = arg0->unk_11D20;
    if ((u32)p != (u32)(p + arg0->unk_11D24)) {
        do {
            if (p != NULL) {
                func_08865EE0(p);
            }
            p++;
        } while (p != arg0->unk_11D20 + arg0->unk_11D24);
    }

    arg0->unk_12010 = (T *)&((S *)(((u32)arg0->unk_11D30 & 0xF) + (u32)arg0))->unk_11D30;
    n = 5;
    arg0->unk_12014 = n;
    p = arg0->unk_12010;
    if ((u32)p != (u32)(p + arg0->unk_12014)) {
        do {
            if (p != NULL) {
                func_08865EE0(p);
            }
            p++;
        } while (p != arg0->unk_12010 + arg0->unk_12014);
    }

    func_08865EE0(&arg0->unk_12020);
    func_08865EE0(&arg0->unk_120B0);
    func_08865EE0(&arg0->unk_12140);
    temp1[0] = D_08A09F30[0];
    temp1[1] = D_08A09F30[1];
    temp1[2] = D_08A09F38[0];
    arg0->unk_121D0 = arg0;
    arg0->unk_121D4 = *(V *)temp1;
    arg0->unk_121E0 = 0;
    arg0->unk_121E4 = 0;
    arg0->unk_121E8 = 0;

    temp2[0] = D_08A09F38[1];
    temp2[1] = D_08A09F40[0];
    temp2[2] = D_08A09F44[0];
    arg0->unk_121EC = arg0;
    arg0->unk_121F0 = *(V *)temp2;
    arg0->unk_121FC = 0;
    arg0->unk_12200 = 0;
    arg0->unk_12204 = 0;
    arg0->unk_12208 = 0;
    arg0->unk_1220C = 0;
    return arg0;
}

}
