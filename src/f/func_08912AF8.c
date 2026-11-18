#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
} P_08912AF8;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x4];
    P_08912AF8 *unk_38;
    u8 pad_3C[0x4];
    u8 unk_40[0x8];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    u8 pad_54[0x4];
    u8 unk_58[0x20];
    s32 unk_78;
    s32 unk_7C;
    u8 unk_80;
    u8 pad_81[0x7];
    u8 unk_88[0x20];
    f32 unk_A8;
    f32 unk_AC;
    f32 unk_B0;
    f32 unk_B4;
    u8 pad_B8[0x4];
    s32 unk_BC;
    u8 unk_C0;
} E_08912AF8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0xFC4];
    u8 *unk_FCC;
    s32 unk_FD0;
    u8 pad_FD4[4];
    E_08912AF8 unk_FD8;
} T_08912AF8;

void func_08865708(void *, void *);
void func_088D6614(void *, void *);
void func_088D6654(void *);
void func_088D6678(void *);
void *func_088D669C(void *, u8 *);
void func_088D68BC(E_08912AF8 *);
void func_08912C00(void *);
void func_08912C28(void *);
void func_08912C30(E_08912AF8 *);

T_08912AF8 *func_08912AF8(T_08912AF8 *arg0, s32 arg1) {
    struct {
        u8 unk_00;
        u8 pad_01[3];
    } c1;
    struct {
        u8 unk_00;
        u8 pad_01[3];
    } c2;
    struct {
        f32 unk_00;
        f32 unk_04;
    } tmp;

    arg0->unk_00 = arg1;
    arg0->unk_04 = 0;
    arg0->unk_FCC = (u8 *)(((u32)arg0->unk_08 & 3) + (u32)arg0 + 0x08);
    arg0->unk_FD0 = 0;
    func_08912C30(&arg0->unk_FD8);
    arg0->unk_FD8.unk_38 = NULL;
    c1.unk_00 = 0;
    func_088D669C(arg0->unk_FD8.unk_40, &c1.unk_00);
    func_08912C28(arg0->unk_FD8.unk_58);
    arg0->unk_FD8.unk_80 = 0;
    func_08912C00(arg0->unk_FD8.unk_88);
    func_088D68BC(&arg0->unk_FD8);
    arg0->unk_FD8.unk_A8 = 1.0f;
    arg0->unk_FD8.unk_AC = 1.0f;
    arg0->unk_FD8.unk_B0 = 1.0f;
    arg0->unk_FD8.unk_B4 = 1.0f;
    arg0->unk_FD8.unk_BC = 0;
    func_088D6678(arg0->unk_FD8.unk_58);
    func_088D6654(arg0->unk_FD8.unk_88);
    c2.unk_00 = 0;
    func_08865708(arg0->unk_FD8.unk_40, func_088D669C(&tmp, &c2.unk_00));
    arg0->unk_FD8.unk_48 = 1.0f;
    arg0->unk_FD8.unk_50 = 1.0f;
    arg0->unk_FD8.unk_4C = 0.0f;
    arg0->unk_FD8.unk_78 = 0;
    arg0->unk_FD8.unk_7C = 0;
    arg0->unk_FD8.unk_30 = 0;
    if (arg0->unk_FD8.unk_38 != NULL && arg0->unk_FD8.unk_38->unk_00 != 0) {
        func_088D6614(arg0->unk_FD8.unk_88, arg0->unk_FD8.unk_38->unk_04);
    }
    arg0->unk_FD8.unk_C0 = 1;
    return arg0;
}
