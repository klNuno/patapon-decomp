#include "common.h"

typedef struct {
    u8 pad_00[0x10228];
    s32 *unk_10228;
    volatile s32 unk_1022C;
    u8 pad_10230[0x10];
    s32 unk_10240;
} Unk;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Unk2;

typedef struct {
    u8 *volatile unk_00;
    Unk2 unk_04;
    s32 unk_10;
} Unk3;

typedef struct {
    Unk3 *unk_00;
    s32 unk_04;
    Unk3 unk_08;
    u8 *unk_1C;
} Unk4;

extern s32 (*D_08ADB1E0[])(s32, Unk *, s32, s32, u8 *, char *, s32, s32, s32, s32, s32, s32);
extern f32 D_08A05BE0[];
extern f32 D_08A05BE8[];
extern f32 D_08A05BEC[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];
extern u8 D_08A480D8[];
void func_088EF528(void *, void *);
void *func_088EF608(u8 *, u8 *, char *, s32 *, u8 *);

void func_0897FFC4(Unk *arg0, void *arg1, s32 arg2, u8 *arg3, char *arg4, s32 arg5,
                   s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11) {
    Unk4 temp;
    Unk2 temp2;
    u8 temp3[0x424];
    s32 temp4 = arg5;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    Unk3 *temp8;

    temp6 = arg0->unk_1022C;
    temp5 = *(s32 *)((u8 *)arg0->unk_10228 + temp6 * 4 - 4);
    arg0->unk_1022C--;
    temp7 = D_08ADB1E0[arg2](arg0->unk_10240, arg0, temp5, 0x200, arg3, arg4,
                             arg6, arg7, arg8, arg9, arg10, arg11);
    temp.unk_04 = 0;
    temp2.unk_00 = D_08A05BE0[1];
    temp2.unk_04 = D_08A05BE8[0];
    temp2.unk_08 = D_08A05BEC[0];
    temp.unk_1C = D_08A46364;
    temp8 = &temp.unk_08;
    if (temp8 != NULL) {
        temp8->unk_00 = D_08A46358;
        temp8->unk_00 = D_08A480D8;
        temp8->unk_04 = temp2;
        temp8->unk_10 = temp7;
    }
    temp.unk_00 = temp8;
    func_088EF528(arg1, func_088EF608(temp3, arg3, arg4, &temp4, (u8 *)&temp));
}
