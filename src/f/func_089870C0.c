#include "common.h"

typedef struct {
    u8 pad_00[0x8];
} T_088DEFA0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 unk_0D;
    u8 pad_0E[2];
} E;

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C[8];
    T_088DEFA0 unk_24;
    s32 unk_2C;
    E unk_30[2];
    u8 pad_50[0x14];
    u8 unk_64;
    u8 unk_65;
} S;

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    s32 unk_08;
} Node;

typedef struct List {
    Node *unk_00;
    Node *unk_04;
    Node *unk_08;
    s32 unk_0C;
} List;

extern List D_08ADB460[];
extern u8 D_08A48234[];
extern u8 D_08A48298[];
extern S *func_08980138(S *, s32, s32);
void func_089457D8(void *);
void func_0898B81C(T_088DEFA0 *);
extern void func_08987338(S *, s32);
extern s32 func_08988394(s32);

static inline void unk_00(E *p)
{
    p->unk_00 = -1;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0C = 0;
    p->unk_0D = 1;
}

S *func_089870C0(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    struct { E *unk_00; } p;

    func_08980138(arg0, arg1, arg2);
    arg0->unk_08 = D_08A48298;
    arg0->unk_0C = 0;
    arg0->unk_10 = arg3;
    arg0->unk_14 = arg4;
    arg0->unk_18 = -1;
    func_089457D8(arg0->unk_1C);
    func_0898B81C(&arg0->unk_24);
    arg0->unk_2C = 0;
    p.unk_00 = arg0->unk_30;
    do {
        unk_00(p.unk_00);
        ++p.unk_00;
    } while (p.unk_00 < arg0->unk_30 + 2);
    arg0->unk_08 = D_08A48234;
    arg0->unk_64 = 0;
    func_08987338(arg0, (*(Node **)((u32)D_08ADB460 + 4))->unk_08);
    arg0->unk_65 = 0;
    func_08988394((s32)arg0);
    return arg0;
}
