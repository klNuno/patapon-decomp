#include "common.h"

extern "C" {

struct N_088E0050 {
    N_088E0050 *unk_00;
    N_088E0050 *unk_04;
    u8 pad_08[0x10];
};

class V_088E0050 {
public:
    u8 pad_00[0x8];
    virtual N_088E0050 *vf_08();
    virtual u32 vf_0C();
};

typedef struct {
    void *unk_00;
    u8 unk_04[0xC004];
    u8 *unk_C008;
    s32 unk_C00C;
} A_088E0050;

typedef struct {
    N_088E0050 *unk_00;
    N_088E0050 *unk_04;
    void *unk_08;
    u8 unk_0C[0x3004];
    u8 *unk_3010;
    void *unk_3014;
    void *unk_3018;
    void *unk_301C;
    s32 unk_3020;
} B_088E0050;

typedef struct {
    u8 pad_00[0x2034];
    u8 unk_2034[0x2038];
    A_088E0050 unk_406C;
    B_088E0050 unk_1007C;
} T_088E0050;

extern u8 D_08A44C14[];
extern u8 D_08A46498[];
extern u8 D_08A46488[];
extern u8 D_08A46478[];
void func_088E1844(T_088E0050 *arg0, s32 arg1);
void func_0893A808(void *arg0, s32 arg1);

T_088E0050 *func_088E0050(T_088E0050 *arg0, s32 arg1) {
    A_088E0050 *a;
    B_088E0050 *b;
    N_088E0050 *p;
    N_088E0050 *prev;
    u32 i;

    func_088E1844(arg0, arg1);
    func_0893A808(arg0->unk_2034, arg1);
    arg0->unk_406C.unk_00 = D_08A44C14;
    a = &arg0->unk_406C;
    arg0->unk_406C.unk_00 = D_08A46498;
    a->unk_C008 = (u8 *)(((u32)a->unk_04 & 3) + (u32)a + 4);
    a->unk_C00C = 0;
    b = &arg0->unk_1007C;
    b->unk_08 = D_08A46488;
    b->unk_08 = D_08A46478;
    b->unk_3010 = (u8 *)(((u32)b->unk_0C + 3) & ~3);
    p = ((V_088E0050 *)b)->vf_08();
    b->unk_00 = p;
    b->unk_04 = p + (((V_088E0050 *)b)->vf_0C() - 1);
    p->unk_04 = (N_088E0050 *)b;
    b->unk_04->unk_00 = (N_088E0050 *)b;
    for (i = 1; i < ((V_088E0050 *)b)->vf_0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    b->unk_301C = b;
    b->unk_3020 = 0;
    b->unk_3014 = &b->unk_3014;
    b->unk_3018 = &b->unk_3014;
    return arg0;
}

}
