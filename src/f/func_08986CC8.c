#include "common.h"

typedef struct {
    s32 unk_00[2];
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
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    u8 unk_64;
    u8 unk_65;
} S;

typedef struct Unk_08988064 Unk_08988064;

typedef struct {
    u8 pad_00[0x6C];
    s32 unk_6C;
} R_08986CC8;

extern S *func_08980138(S *, s32, s32);
void func_089457D8(void *);
void func_0898B81C(T_088DEFA0 *);
void func_0898BD3C(s32 *arg0, void *arg1, s32 *arg2);
s32 func_08988064(Unk_08988064 *arg0, s32 arg1);
R_08986CC8 *func_08988634(char *, s32, s32 *);
extern s32 func_08822AD0(s32, s32);
s32 func_08868CAC(void *, s32, char *, s32);
extern u8 D_08A48298[];
extern u8 D_08A48234[];
extern void *D_08AD1E28[];
extern char *D_08A05F30[];
extern s32 D_08A06000[];

static inline void unk_00(E *p) {
    p->unk_00 = -1;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0C = 0;
    p->unk_0D = 1;
}

static inline void unk_04(E *p, s32 a, s32 b, s32 c) {
    p->unk_00 = a;
    p->unk_04 = b;
    p->unk_08 = c;
    p->unk_0C = 0;
    p->unk_0D = 0;
}

static inline void *unk_08(void) {
    void *p = D_08AD1E28[0];
    return p != NULL ? p : NULL;
}

S *func_08986CC8(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 arg6, s32 *arg7, s32 *arg8, s32 *arg9) {
    s32 temp[2];
    E *p;
    s32 t;
    u32 i;
    void *r;
    char *s;

    func_08980138(arg0, arg1, arg2);
    arg0->unk_08 = D_08A48298;
    arg0->unk_0C = 0;
    arg0->unk_10 = arg3;
    arg0->unk_14 = arg4;
    arg0->unk_18 = -1;
    func_089457D8(arg0->unk_1C);
    func_0898B81C(&arg0->unk_24);
    arg0->unk_2C = 0;
    p = arg0->unk_30;
    do {
        unk_00(p);
        ++p;
    } while (p < arg0->unk_30 + 2);

    arg0->unk_08 = D_08A48234;
    arg0->unk_50 = 0;
    arg0->unk_54 = *arg5;
    arg0->unk_58 = 0;
    arg0->unk_5C = 1;
    arg0->unk_60 = *arg7;
    arg0->unk_64 = 1;
    arg0->unk_65 = 1;
    func_0898BD3C(arg0->unk_24.unk_00, (void *)arg4, temp);
    t = func_08988064((Unk_08988064 *)arg0, temp[0]);
    unk_04(&arg0->unk_30[0], temp[0], t, *arg8);
    t = func_08988064((Unk_08988064 *)arg0, temp[1]);
    unk_04(&arg0->unk_30[1], temp[1], t, *arg9);
    arg0->unk_2C = func_08988634((char *)arg0, arg4, temp)->unk_6C;

    r = unk_08();
    i = 0;
    arg5 = D_08A06000;
    do {
        if (func_08822AD0(*arg5, arg4) == 0) {
            s = D_08A05F30[i];
            goto end;
        }
        ++i;
        ++arg5;
    } while (i < 15);
    s = D_08A05F30[0];
end:
    arg0->unk_50 = func_08868CAC(r, 10, s, 1);
    return arg0;
}
