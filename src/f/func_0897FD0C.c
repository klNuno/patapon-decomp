#include "common.h"

typedef struct {
    u8 pad_00[0x10228];
    s32 *unk_10228;
    s32 unk_1022C;
    u8 pad_10230[0x10];
    void *unk_10240;
} T;

typedef struct {
    f32 unk_00[2];
} V2;

typedef struct {
    f32 unk_00[3];
} V3;

typedef struct {
    u8 *unk_00;
    V3 unk_04;
    void *unk_10;
} U;

typedef struct {
    U *unk_00;
    s32 unk_04;
    U unk_08;
    u8 *unk_1C;
} W;

typedef void *(*F)(void *, T *, s32, s32, u8 *, char *, s32, s32, s32, s32);

extern F D_08ADB1DC[];
extern f32 D_08A05BC8[];
extern f32 D_08A05BD0[];
extern f32 D_08A05BD4[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];
extern u8 D_08A480D8[];

void func_088EF528(void *, void *);
void *func_088EF608(u8 *, u8 *, char *, s32 *, u8 *);

static inline s32 func_0897FD0C_1(T *arg0) {
    s32 d = arg0->unk_1022C * 4;
    s32 ret = *(s32 *)((u8 *)arg0->unk_10228 + d - 4);
    *(volatile s32 *)&arg0->unk_1022C -= 1;
    return ret;
}

void func_0897FD0C(T *arg0, void *arg1, s32 arg2, u8 *arg3, char *arg4,
                   s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    W w;
    V3 v;
    u8 temp[0x424];
    s32 k;
    s32 n;
    void *q;
    U *p;

    k = arg5;
    n = func_0897FD0C_1(arg0);
    q = D_08ADB1DC[arg2](arg0->unk_10240, arg0, n, 0x200, arg3, arg4,
                         arg6, arg7, arg8, arg9);
    w.unk_04 = 0;
    v.unk_00[0] = D_08A05BC8[1];
    v.unk_00[1] = D_08A05BD0[0];
    v.unk_00[2] = D_08A05BD4[0];
    w.unk_1C = D_08A46364;
    p = &w.unk_08;
    if (p != NULL) {
        *(u8 *volatile *)&p->unk_00 = D_08A46358;
        p->unk_00 = D_08A480D8;
        p->unk_04 = v;
        p->unk_10 = q;
    }
    w.unk_00 = p;
    func_088EF528(arg1, func_088EF608(temp, arg3, arg4, &k, (u8 *)&w));
}
