#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
} U;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[4];
    U *unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    f32 unk_44;
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
    u8 unk_88[0x20];
} W;

void func_08865708(void *, void *);
void func_088D6614(void *, void *);
void func_088D6654(void *);
void func_088D6678(void *);
void *func_088D669C(void *, u8 *);

W *func_08953538(W *arg0, s32 arg1, V *arg2, U *arg3, u8 arg4, f32 arg5) {
    struct {
        u8 unk_00;
        u8 pad_01[7];
    } c;
    V temp;
    U *p;

    arg0->unk_38 = arg3;
    arg0->unk_40 = arg2->unk_00;
    arg0->unk_44 = arg2->unk_04;
    arg0->unk_80 = arg4;
    *(f32 *)&arg0->unk_88[0] = 0.0f;
    *(f32 *)&arg0->unk_88[4] = 0.0f;
    *(f32 *)&arg0->unk_88[8] = 0.0f;
    *(f32 *)&arg0->unk_88[0xC] = 1.0f;
    *(f32 *)&arg0->unk_88[0x10] = 0.0f;
    *(f32 *)&arg0->unk_88[0x14] = 0.0f;
    *(f32 *)&arg0->unk_88[0x18] = 0.0f;
    func_088D6678(arg0->unk_58);
    func_088D6654(arg0->unk_88);
    c.unk_00 = 0;
    func_08865708(&arg0->unk_40, func_088D669C(&temp, &c.unk_00));
    arg0->unk_48 = 1.0f;
    arg0->unk_50 = 1.0f;
    arg0->unk_4C = 0.0f;
    arg0->unk_78 = 0;
    arg0->unk_7C = 0;
    arg0->unk_30 = 0;
    p = arg0->unk_38;
    if (p != NULL && p->unk_00 != 0) {
        func_088D6614(arg0->unk_88, p->unk_04);
    }
    arg0->unk_68 = arg5;
    arg0->unk_30 = arg1;
    arg0->unk_38 = arg3;
    return arg0;
}
