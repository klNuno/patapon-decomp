#include "common.h"

typedef struct {
    u8 pad_00[0x91C];
    u8 *unk_91C;
    u8 pad_920[0xE0];
    s32 unk_A00;
    s32 unk_A04;
} T;

extern void func_088F0C70(T *);
extern u8 D_08A48060[];

T *func_0897CF28(T *arg0) {
    func_088F0C70(arg0);
    arg0->unk_91C = D_08A48060;
    arg0->unk_A00 = 0;
    arg0->unk_A04 = 0;
    return arg0;
}
