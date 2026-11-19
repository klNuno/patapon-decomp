#include "common.h"
extern u8 D_08A44800[];
void *func_08827110(void *);

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} A;

typedef struct {
    u8 *unk_00;
    A *unk_04;
    u8 pad_08[0x10];
    A *unk_18;
    s32 unk_1C;
} T;

T *func_08827E30(T *arg0) {
    func_08827110(arg0);
    arg0->unk_00 = D_08A44800;
    arg0->unk_04->unk_04 = 0;
    arg0->unk_18 = arg0->unk_04;
    arg0->unk_1C = 1;
    return arg0;
}
