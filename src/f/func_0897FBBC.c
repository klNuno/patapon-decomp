#include "common.h"

typedef struct { f32 unk_00[2]; } V2;

typedef struct {
    f32 unk_00[3];
} V;

typedef struct {
    u8 *unk_00;
    V unk_04;
    s32 unk_10;
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
    E unk_08;
    u8 *unk_1C;
} P;

typedef struct {
    u8 pad_00[0x10228];
    s32 *unk_10228;
    s32 unk_1022C;
    u8 pad_10230[0x10];
    s32 unk_10240;
} T;

typedef s32 (*F)(s32, T *, s32, s32, s32, s32, s32 *, s32 *, s32 *);

extern f32 D_08A05BC0[];
extern f32 D_08A05BC8[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];
extern u8 D_08A480D8[];
extern F D_08ADB1D8[];

void func_088EF528(void *, void *);
void *func_088EF608(u8 *, u8 *, char *, s32 *, u8 *);

static inline s32 unk_00(T *arg0) {
    s32 d = arg0->unk_1022C * 4;
    s32 ret = *(s32 *)((u8 *)arg0->unk_10228 + d - 4);
    *(volatile s32 *)&arg0->unk_1022C -= 1;
    return ret;
}

void func_0897FBBC(T *arg0, void *arg1, s32 arg2, u8 *arg3, char *arg4, s32 arg5,
                   s32 *arg6, s32 *arg7, s32 *arg8) {
    P p;
    V v;
    u8 b[0x424];
    s32 a;
    s32 d;
    s32 k;
    E *e;

    a = arg5;
    d = unk_00(arg0);
    k = D_08ADB1D8[arg2](arg0->unk_10240, arg0, d, 0x200, (s32)arg3, (s32)arg4, arg6, arg7, arg8);
    p.unk_04 = 0;
    *(V2 *)&v = *(V2 *)D_08A05BC0;
    v.unk_00[2] = D_08A05BC8[0];
    p.unk_1C = D_08A46364;
    e = &p.unk_08;
    if (e != NULL) {
        *(u8 *volatile *)&e->unk_00 = D_08A46358;
        e->unk_00 = D_08A480D8;
        e->unk_04 = v;
        e->unk_10 = k;
    }
    p.unk_00 = e;
    func_088EF528(arg1, func_088EF608(b, arg3, arg4, &a, (u8 *)&p));
}
