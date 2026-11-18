#include "common.h"

extern "C" {

typedef struct N_0891B1DC {
    struct N_0891B1DC *unk_00;
    struct N_0891B1DC *unk_04;
    u8 pad_08[8];
} N_0891B1DC;

class C_0891B1DC {
public:
    u8 pad_00[8];
    virtual N_0891B1DC *unk_08();
    virtual u32 unk_0C();
};

typedef struct {
    N_0891B1DC *unk_00;
    N_0891B1DC *unk_04;
    void *unk_08;
    u8 unk_0C[0x210];
    u32 unk_21C;
    void *unk_220;
    void *unk_224;
    void *unk_228;
    s32 unk_22C;
} Obj_0891B1DC;

extern u8 D_08A46B70[];
extern u8 D_08A46B80[];

Obj_0891B1DC *func_0891B1DC(Obj_0891B1DC *arg0) {
    N_0891B1DC *p;
    N_0891B1DC *prev;
    u32 i;

    arg0->unk_08 = D_08A46B70;
    arg0->unk_08 = D_08A46B80;
    arg0->unk_21C = ((u32)arg0->unk_0C + 0xF) & ~0xF;
    p = ((C_0891B1DC *)arg0)->unk_08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((C_0891B1DC *)arg0)->unk_0C() - 1);
    p->unk_04 = (N_0891B1DC *)arg0;
    arg0->unk_04->unk_00 = (N_0891B1DC *)arg0;
    for (i = 1; i < ((C_0891B1DC *)arg0)->unk_0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_228 = arg0;
    arg0->unk_22C = 0;
    arg0->unk_220 = &arg0->unk_220;
    arg0->unk_224 = &arg0->unk_220;
    return arg0;
}

}
