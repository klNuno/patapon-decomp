#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    void *unk_08;
} T;
extern u8 D_08A48F0C[];

T *func_089D057C(T *arg0) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48F0C;
        arg0->unk_00 = 14.0f;
        arg0->unk_04 = 14.0f;
    }
    return arg0;
}
