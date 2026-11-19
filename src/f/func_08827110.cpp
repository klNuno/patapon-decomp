#include "common.h"

extern "C" {

struct B_08827110 {
    B_08827110 *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    void *unk_14;
    s32 unk_18;
};

typedef struct {
    void *unk_00;
    B_08827110 *unk_04;
    B_08827110 *unk_08;
    u32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} T_08827110;

extern u8 D_08A44770[];
extern u8 D_08A447A0[];
extern const s32 D_089DA768[];
extern char D_089F7134[];

T_08827110 *func_08827110(T_08827110 *arg0, B_08827110 *arg1, u32 arg2) {
    u32 n;
    B_08827110 *b;

    arg0->unk_00 = D_08A44770;
    arg0->unk_00 = D_08A447A0;
    arg0->unk_04 = arg1;
    arg1->unk_08 = 1;
    n = arg2 / sizeof(B_08827110) * sizeof(B_08827110);
    arg0->unk_08 = (B_08827110 *)((u8 *)arg0->unk_04 + n) - 1;
    arg0->unk_08->unk_00 = NULL;
    arg0->unk_08->unk_08 = 2;
    arg0->unk_04->unk_00 = arg0->unk_08;
    arg0->unk_0C = n;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    b = arg0->unk_04;
    b->unk_0C = 0;
    if (b->unk_08 != 2) {
        b->unk_10 = (u8 *)b->unk_00 - (u8 *)b - sizeof(B_08827110);
    } else {
        b->unk_10 = 0;
    }
    s32 d = D_089DA768[0];
    b->unk_18 = 0;
    b->unk_14 = (void *)d;
    b = arg0->unk_08;
    b->unk_0C = 0;
    b->unk_10 = 0;
    b->unk_18 = 0;
    b->unk_14 = D_089F7134;
    return arg0;
}

}
