#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
} P_08912D8C;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x4];
    P_08912D8C *unk_38;
    u8 pad_3C[0x4];
    u8 unk_40[0x8];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    u8 pad_54[0x4];
    u8 unk_58[0x20];
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0x8];
    u8 unk_88[0x20];
} E_08912D8C;

typedef struct {
    E_08912D8C *unk_00;
    s32 unk_04;
} V_08912D8C;

typedef struct {
    u8 pad_00[0xFCC];
    V_08912D8C unk_FCC;
} T_08912D8C;

void func_08865708(void *, void *);
void func_088D6614(void *, void *);
void func_088D6654(void *);
void func_088D6678(void *);
void *func_088D669C(void *, u8 *);

void func_08912D8C(T_08912D8C *arg0) {
    struct {
        u8 unk_00;
        u8 pad_01[3];
    } c;
    struct {
        f32 unk_00;
        f32 unk_04;
        u8 pad_08[4];
    } tmp;
    E_08912D8C *p;
    V_08912D8C *v;
    s32 *n;

    p = arg0->unk_FCC.unk_00;
    v = &arg0->unk_FCC;
    if ((u32)p != (u32)(p + arg0->unk_FCC.unk_04)) {
        n = &arg0->unk_FCC.unk_04;
        do {
            func_088D6678(p->unk_58);
            func_088D6654(p->unk_88);
            c.unk_00 = 0;
            func_08865708(p->unk_40, func_088D669C(&tmp, &c.unk_00));
            p->unk_48 = 1.0f;
            p->unk_50 = 1.0f;
            p->unk_4C = 0.0f;
            p->unk_78 = 0;
            p->unk_7C = 0;
            p->unk_30 = 0;
            if (p->unk_38 != NULL && p->unk_38->unk_00 != 0) {
                func_088D6614(p->unk_88, p->unk_38->unk_04);
            }
            p++;
        } while (p != v->unk_00 + *n);
    }
}
