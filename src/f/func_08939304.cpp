#include "common.h"

extern "C" {

typedef struct N_08939304 {
    struct N_08939304 *unk_00;
    struct N_08939304 *unk_04;
    u8 pad_08[0x8];
} N_08939304;

typedef struct {
    N_08939304 *unk_00;
    N_08939304 *unk_04;
    void *unk_08;
    u8 unk_0C[0x210];
    u32 unk_21C;
    void *unk_220;
    void *unk_224;
    void *unk_228;
    s32 unk_22C;
} I_08939304;

struct V_08939304 {
    u8 pad_00[0x8];
    virtual N_08939304 *v0();
    virtual u32 v1();
};

typedef struct {
    f32 unk_00[3];
} F_08939304;

typedef struct {
    void *unk_00;
    F_08939304 unk_04;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    s32 unk_18;
} B_08939304;

typedef struct {
    void *unk_00;
    I_08939304 unk_04;
    s32 unk_234;
} W_08939304;

struct H_08939304 {
    virtual void *v0(s32, s32);
};

typedef struct {
    H_08939304 *unk_00;
    void *unk_04;
    f32 unk_08;
    B_08939304 unk_0C;
    B_08939304 unk_28;
    s32 unk_44;
    u8 unk_48;
    u8 pad_49[3];
    s32 unk_4C;
    u8 unk_50;
    u8 pad_51[3];
    W_08939304 unk_54;
    u8 unk_28C;
} S_08939304;

extern u8 D_08A47248[];
extern u8 D_08A47238[];
typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Unk088BD534_03;

extern Unk088BD534_03 D_08A490BC[];

void func_0881F5C0(void *, s32, s32);

S_08939304 *func_08939304(S_08939304 *arg0, H_08939304 *arg1) {
    F_08939304 t;
    W_08939304 *w;
    I_08939304 *in;
    N_08939304 *n;
    N_08939304 *p;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 1.0f;
    arg0->unk_0C.unk_00 = arg0;
    const Unk088BD534_03 *temp = (const Unk088BD534_03 *)(u32)D_08A490BC;
    f32 a = ((volatile Unk088BD534_03 *)D_08A490BC)->unk_00;
    f32 b = temp->unk_04;
    f32 c = temp->unk_08;
    t.unk_00[0] = a;
    t.unk_00[1] = b;
    t.unk_00[2] = c;
    arg0->unk_0C.unk_04 = t;
    arg0->unk_0C.unk_10 = 0;
    arg0->unk_0C.unk_14 = 0;
    arg0->unk_0C.unk_18 = 0;
    arg0->unk_28.unk_00 = arg0;
    arg0->unk_28.unk_04 = t;
    arg0->unk_28.unk_10 = 0;
    arg0->unk_28.unk_14 = 0;
    arg0->unk_28.unk_18 = 0;
    arg0->unk_44 = 0;
    arg0->unk_48 = 0;
    arg0->unk_4C = 0;
    arg0->unk_50 = 0;
    w = &arg0->unk_54;
    w->unk_00 = arg0;
    in = &w->unk_04;
    in->unk_08 = D_08A47248;
    in->unk_08 = D_08A47238;
    in->unk_21C = ((u32)in->unk_0C + 0xF) & ~0xF;
    n = ((V_08939304 *)in)->v0();
    in->unk_00 = n;
    in->unk_04 = n + (((V_08939304 *)in)->v1() - 1);
    n->unk_04 = (N_08939304 *)in;
    in->unk_04->unk_00 = (N_08939304 *)in;
    for (i = 1; i < ((V_08939304 *)in)->v1(); i++) {
        p = n;
        n++;
        p->unk_00 = n;
        n->unk_04 = p;
    }
    in->unk_228 = in;
    in->unk_22C = 0;
    in->unk_220 = &in->unk_220;
    in->unk_224 = &in->unk_220;
    w->unk_234 = 0;
    arg0->unk_28C = 0;
    arg0->unk_04 = arg0->unk_00->v0(0x80000, 0x10);
    func_0881F5C0(arg0->unk_04, 0, 0x80000);
    return arg0;
}

}
