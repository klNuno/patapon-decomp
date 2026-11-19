#include "common.h"

typedef struct V V;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u8 *unk_08;
    u32 unk_0C;
    u32 unk_10;
    f32 unk_14;
} U;

typedef struct {
    s8 *unk_00;
    s32 *unk_04;
    s32 unk_08;
    V *unk_0C;
    u32 unk_10;
    u8 pad_14[0x4];
    u8 *unk_18;
} A_088048E8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0C;
} P_088048E8;

typedef struct {
    s32 *unk_00;
    s8 *unk_04;
    s32 unk_08;
    void *unk_0C;
    s32 unk_10;
} E_088048E8;

typedef struct A A;
typedef struct S S;
typedef struct T T;
typedef struct T_08805B40 T_08805B40;

void func_0880462C(void);
u8 *func_08804778(u8 *arg0, u32 *arg1);
u8 *func_08804814(u8 *arg0, s32 *arg1);
u8 *func_08804A4C(T *arg0, const U *arg1, u32 *arg2);
V *func_08804F44(T *arg0, const U *arg1);
void func_08805098(T *, const U *, u8 *);
void func_08805B40(u32 arg0, T_08805B40 *arg1);
void func_08805CE0(T *, const U *, u32);
void func_08805F0C(S *arg0, A *arg1);

void func_088048E8(A_088048E8 *arg0) {
    s32 w;
    U it;
    P_088048E8 x;
    u8 *p;
    u8 *q;
    E_088048E8 *e;
    s32 d;

    func_08805B40(arg0->unk_10, (T_08805B40 *)&it);
    if (it.unk_04 == 0) {
        func_0880462C();
    }
    func_08805F0C((S *)arg0, (A *)&it);
    if (arg0->unk_00 == NULL) {
        arg0->unk_0C = func_08804F44((T *)arg0, &it);
    } else {
        arg0->unk_0C = NULL;
    }
    p = func_08804A4C((T *)arg0, &it, (u32 *)&x);
    w = ((u32)p[4] << 24) | ((p[3] << 16) | (s32)((u32)p[1] | (p[2] << 8)));
    q = p + 5;
    x.unk_04 = w;
    x.unk_04 = w != 0 ? w : 0;
    func_08804814(func_08804778(q, &x.unk_08), &x.unk_0C);
    func_08805098((T *)arg0, &it, p);
    d = x.unk_00;
    e = (E_088048E8 *)(arg0->unk_18 + *(volatile s32 *)&x.unk_0C);
    e->unk_00 = arg0->unk_04;
    e->unk_04 = arg0->unk_00;
    e->unk_08 = arg0->unk_08;
    if (*arg0->unk_00 == '*') {
        e->unk_0C = &e->unk_10;
        e->unk_10 = *arg0->unk_04 + d;
    } else {
        e->unk_0C = (u8 *)arg0->unk_04 + d;
    }
    func_08805CE0((T *)arg0, &it, it.unk_00 + x.unk_08);
}
