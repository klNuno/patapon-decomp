#include "common.h"

extern u8 D_08A48EDC[];
extern u8 D_08A48F0C[];

typedef struct {
    volatile f32 unk_00;
    volatile f32 unk_04;
    u8 *volatile unk_08;
} S;

S *func_089D04F0(S *arg0) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48F0C;
        arg0->unk_00 = 14.0f;
        arg0->unk_04 = 14.0f;
        arg0->unk_08 = D_08A48EDC;
        arg0->unk_00 = 16.0f;
        arg0->unk_04 = 16.0f;
    }
    return arg0;
}
