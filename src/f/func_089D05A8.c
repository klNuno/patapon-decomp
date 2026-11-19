#include "common.h"

extern u8 D_08A48EAC[];
extern u8 D_08A48F0C[];

typedef struct {
    volatile f32 unk_00;
    volatile f32 unk_04;
    void *volatile unk_08;
} T;

T *func_089D05A8(T *arg0) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48F0C;
        arg0->unk_00 = 14.0f;
        arg0->unk_04 = 14.0f;
        arg0->unk_08 = D_08A48EAC;
        arg0->unk_00 = 16.0f;
        arg0->unk_04 = 16.0f;
    }
    return arg0;
}
