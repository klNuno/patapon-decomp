#include "common.h"

extern "C" {

typedef struct E_0893B890 {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    u8 pad_20[0x8];
} E_0893B890;

typedef struct {
    E_0893B890 *unk_00;
    u32 unk_04;
} V_0893B890;

typedef struct L_0893B890 {
    struct L_0893B890 *unk_00;
    struct L_0893B890 *unk_04;
    u8 pad_08[0x1C];
    void *unk_24;
} L_0893B890;

typedef struct {
    f32 unk_00[3];
} V3_0893B890;

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 unk_2C[0xA04];
    V_0893B890 unk_A30;
    L_0893B890 unk_A38;
    L_0893B890 unk_A60;
    void *unk_A88;
    V3_0893B890 unk_A8C;
    u8 unk_A98;
    s32 unk_A9C;
    s32 unk_AA0;
    u8 unk_AA4;
} S_0893B890;

extern u8 D_08A472DC[];
extern u8 D_08A4535C[];
extern u8 D_08A45350[];
extern f32 D_08A03928[];
extern f32 D_08A03930[];
extern f32 D_08A03934[];

void func_088CE4F4(S_0893B890 *, s32);
void func_08880754(L_0893B890 *);
void func_0888065C(L_0893B890 *);

S_0893B890 *func_0893B890(S_0893B890 *arg0) {
    E_0893B890 *p;
    V_0893B890 *v;
    u32 *n;
    L_0893B890 *l;
    V3_0893B890 a;

    func_088CE4F4(arg0, 0);
    arg0->unk_28 = D_08A472DC;
    arg0->unk_A30.unk_00 = (E_0893B890 *)(((u32)arg0->unk_2C & 3) + (u32)arg0 + 0x2C);
    arg0->unk_A30.unk_04 = 0x40;
    p = arg0->unk_A30.unk_00;
    v = &arg0->unk_A30;
    if ((u32)p != (u32)(p + arg0->unk_A30.unk_04)) {
        n = &arg0->unk_A30.unk_04;
        do {
            if (p != NULL) {
                p->unk_1C = D_08A4535C;
                p->unk_00 = NULL;
                p->unk_04 = NULL;
                p->unk_08 = NULL;
                p->unk_0C = NULL;
            }
            p++;
        } while (p != v->unk_00 + *n);
    }
    l = &arg0->unk_A38;
    arg0->unk_A38.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    l = &arg0->unk_A60;
    arg0->unk_A60.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    a.unk_00[0] = D_08A03928[1];
    a.unk_00[1] = D_08A03930[0];
    a.unk_00[2] = D_08A03934[0];
    arg0->unk_A88 = arg0;
    arg0->unk_A8C = a;
    arg0->unk_A98 = 0;
    arg0->unk_A9C = 0;
    arg0->unk_AA0 = 0;
    arg0->unk_AA4 = 1;
    return arg0;
}

}
