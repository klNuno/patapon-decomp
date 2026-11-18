#include "common.h"

typedef struct {
    f32 unk_00[4];
} V;

typedef struct {
    V unk_00;
    V unk_10;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
} M;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} P;

typedef struct {
    s32 unk_00;
    void *unk_04;
} T;

typedef struct {
    M unk_00;
    s32 unk_30;
    u8 pad_34[4];
    T *unk_38;
    u8 pad_3C[4];
    P unk_40;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    u8 pad_54[4];
    u8 unk_58[0x10];
    f32 unk_68;
    u8 pad_6C[0xC];
    s32 unk_78;
    s32 unk_7C;
    u8 unk_80;
    u8 pad_81[7];
    s32 unk_88;
    s32 unk_8C;
    f32 unk_90;
    f32 unk_94;
    s32 unk_98;
    s32 unk_9C;
    s32 unk_A0;
} S;

void func_08865708(void *, void *);
void func_088D6614(void *, void *);
void func_088D6654(void *);
void func_088D6678(void *);
void *func_088D669C(void *, u8 *);

S *func_088D64DC(S *arg0, const M *arg1, const P *arg2, T *arg3, u8 arg4, f32 arg5) {
    u8 b[8];
    u8 a[8];
    T *p;

    arg0->unk_00.unk_00 = arg1->unk_00;
    arg0->unk_00.unk_10 = arg1->unk_10;
    arg0->unk_00.unk_20 = arg1->unk_20;
    arg0->unk_00.unk_24 = arg1->unk_24;
    arg0->unk_00.unk_28 = arg1->unk_28;
    arg0->unk_00.unk_2C = arg1->unk_2C;
    arg0->unk_38 = arg3;
    arg0->unk_40.unk_00 = arg2->unk_00;
    arg0->unk_40.unk_04 = arg2->unk_04;
    arg0->unk_80 = arg4;
    arg0->unk_88 = 0;
    arg0->unk_8C = 0;
    arg0->unk_90 = 0.0f;
    arg0->unk_94 = 1.0f;
    arg0->unk_98 = 0;
    arg0->unk_9C = 0;
    arg0->unk_A0 = 0;
    func_088D6678(arg0->unk_58);
    func_088D6654(&arg0->unk_88);
    b[0] = 0;
    func_08865708(&arg0->unk_40, func_088D669C(a, b));
    arg0->unk_48 = 1.0f;
    arg0->unk_50 = 1.0f;
    arg0->unk_4C = 0.0f;
    arg0->unk_78 = 0;
    arg0->unk_7C = 0;
    arg0->unk_30 = 0;
    p = arg0->unk_38;
    if (p != NULL && p->unk_00 != 0) {
        func_088D6614(&arg0->unk_88, p->unk_04);
    }
    arg0->unk_68 = arg5;
    return arg0;
}
