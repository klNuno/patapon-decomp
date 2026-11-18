#include "common.h"

typedef struct {
    f32 unk_00[3];
} V_0897FA74;

typedef struct {
    void *unk_00;
    V_0897FA74 unk_04;
    s32 unk_10;
} U_0897FA74;

typedef struct {
    U_0897FA74 *unk_00;
    void *unk_04;
    U_0897FA74 unk_08;
    void *unk_1C;
} W_0897FA74;

typedef struct {
    u8 pad_00[0x10228];
    s32 *unk_10228;
    s32 unk_1022C;
    u8 pad_10230[0x10];
    s32 unk_10240;
} S_0897FA74;

typedef s32 (*F_0897FA74)(s32, S_0897FA74 *, s32, s32, s32, s32);

extern F_0897FA74 D_08A05B94[];
extern f32 D_08A05BB0[];
extern f32 D_08A05BB8[];
extern f32 D_08A05BBC[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];
extern u8 D_08A480D8[];

s32 func_088EF608(u8 *, s32, s32, s32 *, W_0897FA74 *);
void func_088EF528(void *, s32);

void func_0897FA74(S_0897FA74 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    W_0897FA74 w;
    V_0897FA74 temp;
    u8 buf[0x424];
    U_0897FA74 *u;
    s32 p;
    s32 v;

    p = *(s32 *)((u8 *)arg0->unk_10228 + (*(volatile s32 *)&arg0->unk_1022C << 2) - 4);
    arg0->unk_1022C--;
    v = D_08A05B94[arg2](arg0->unk_10240, arg0, p, 0x200, arg3, arg4);
    w.unk_04 = NULL;
    temp.unk_00[0] = D_08A05BB0[1];
    temp.unk_00[1] = D_08A05BB8[0];
    temp.unk_00[2] = D_08A05BBC[0];
    w.unk_1C = D_08A46364;
    u = &w.unk_08;
    if (u != NULL) {
        *(void *volatile *)&u->unk_00 = D_08A46358;
        u->unk_00 = D_08A480D8;
        u->unk_04 = temp;
        u->unk_10 = v;
    }
    w.unk_00 = u;
    func_088EF528(arg1, func_088EF608(buf, arg3, arg4, &arg5, &w));
}
