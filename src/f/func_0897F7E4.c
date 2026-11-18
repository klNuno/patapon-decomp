#include "common.h"

typedef struct {
    f32 unk_00[3];
} V_0897F7E4;

typedef struct {
    void *unk_00;
    V_0897F7E4 unk_04;
    s32 unk_10;
} U_0897F7E4;

typedef struct {
    U_0897F7E4 *unk_00;
    s32 unk_04;
    U_0897F7E4 unk_08;
    void *unk_1C;
} X_0897F7E4;

typedef struct {
    u8 pad_00[0x10228];
    s32 *unk_10228;
    s32 unk_1022C;
    u8 pad_10230[0x10];
    s32 unk_10240;
} T_0897F7E4;

extern s32 (*D_08A05B88[])(s32, T_0897F7E4 *, s32, s32, s32, s32);
extern f32 D_08A05B98[];
extern f32 D_08A05BA0[];
extern f32 D_08A05BA4[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];
extern u8 D_08A480D8[];
void *func_088EF608(u8 *, s32, s32, s32 *, X_0897F7E4 *);
void func_088EF528(void *, void *);

void func_0897F7E4(T_0897F7E4 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    X_0897F7E4 f;
    V_0897F7E4 temp;
    u8 buf[0x424];
    U_0897F7E4 *p;
    s32 x;
    s32 r;

    x = *(s32 *)((u8 *)arg0->unk_10228 + *(s32 *)&arg0->unk_1022C * 4 - 4);
    (*(volatile s32 *)&arg0->unk_1022C)--;
    r = D_08A05B88[arg2](arg0->unk_10240, arg0, x, 0x200, arg3, arg4);
    f.unk_04 = 0;
    temp.unk_00[0] = D_08A05B98[1];
    temp.unk_00[1] = D_08A05BA0[0];
    temp.unk_00[2] = D_08A05BA4[0];
    f.unk_1C = D_08A46364;
    p = &f.unk_08;
    if (p != NULL) {
        p->unk_00 = D_08A46358;
        p->unk_00 = D_08A480D8;
        p->unk_04 = temp;
        p->unk_10 = r;
    }
    f.unk_00 = p;
    func_088EF528(arg1, func_088EF608(buf, arg3, arg4, &arg5, &f));
}
