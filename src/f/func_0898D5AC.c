#include "common.h"

typedef union {
    struct {
        s32 unk_00;
        s32 unk_04;
    } unk_00;
    f32 unk_08[2];
} E;

typedef struct {
    u8 pad_00[0x184];
    s32 unk_184;
    u8 pad_188[0x18C];
    s32 unk_314;
} T;

extern f32 D_08A06460[];
extern f32 D_08A06468[];
extern f32 D_08A06470[];
extern f32 D_08A06478[];
extern f32 D_08A06480[];
extern f32 D_08A06488[];
extern f32 D_08A06490[];
extern f32 D_08A06498[];
extern f32 D_08A064A0[];
extern f32 D_08A064A8[];

s32 func_088586E8(void);
u32 func_089B5464(s32);

void func_0898D5AC(T *arg0) {
    E a[4];
    E b[5];
    u32 i = 0;
    T *q;
    u32 j;
    E *temp;
    s32 *n;
    s32 count;
    s32 val;

    f32 f0 = D_08A06460[1];
    f32 f1 = D_08A06468[0];
    q = arg0;
    a[0].unk_08[0] = f0;
    a[0].unk_08[1] = f1;
    a[1].unk_08[0] = D_08A06468[1];
    a[1].unk_08[1] = D_08A06470[0];
    a[2].unk_08[0] = D_08A06470[1];
    a[2].unk_08[1] = D_08A06478[0];
    a[3].unk_08[0] = D_08A06478[1];
    a[3].unk_08[1] = D_08A06480[0];

    do {
        do {
            temp = &a[func_089B5464(func_088586E8()) & 3];
            n = &temp->unk_00.unk_04;
            count = *n;
        } while (count == 0);
        val = temp->unk_00.unk_00;
        i++;
        *n = count - 1;
        q->unk_184 = val;
        q = (T *)((u8 *)q + 4);
    } while (i < 100U);

    j = 0;
    b[0].unk_08[0] = D_08A06480[1];
    b[0].unk_08[1] = D_08A06488[0];
    b[1].unk_08[0] = D_08A06488[1];
    b[1].unk_08[1] = D_08A06490[0];
    b[2].unk_08[0] = D_08A06490[1];
    b[2].unk_08[1] = D_08A06498[0];
    b[3].unk_08[0] = D_08A06498[1];
    b[3].unk_08[1] = D_08A064A0[0];
    b[4].unk_08[0] = D_08A064A0[1];
    b[4].unk_08[1] = D_08A064A8[0];

    do {
        do {
            temp = &b[func_089B5464(func_088586E8()) % 5U];
            n = &temp->unk_00.unk_04;
            count = *n;
        } while (count == 0);
        val = temp->unk_00.unk_00;
        j++;
        *n = count - 1;
        arg0->unk_314 = val;
        arg0 = (T *)((u8 *)arg0 + 4);
    } while (j < 90U);
}
