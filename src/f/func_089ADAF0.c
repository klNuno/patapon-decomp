#include "common.h"
typedef struct {
    u8 *volatile unk_00;
    s32 unk_04;
} T0;

extern u8 D_08A487B4[];
extern u8 D_08A487F8[];

T0 *func_089ADAF0(T0 *arg0, s32 arg1) {
    arg0->unk_00 = D_08A487B4;
    arg0->unk_00 = D_08A487F8;
    arg0->unk_04 = arg1;
    return arg0;
}
