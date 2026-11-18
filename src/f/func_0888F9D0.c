#include "common.h"

typedef struct {
    u8 pad_00[0x92E0];
    s32 unk_92E0;
} V;

typedef struct {
    u8 pad_00[0x8190];
    f32 unk_8190;
} B;

typedef struct {
    u8 pad_00[0x3A0];
    V *unk_3A0;
    u8 pad_3A4[0x18CC - 0x3A4];
    B *unk_18CC;
    f32 unk_18D0;
    f32 *unk_18D4;
} S;

void func_0888F9D0(S *arg0) {
    f32 *q;
    f32 *p;
    f32 d;

    if (arg0->unk_18CC != NULL) {
        q = &arg0->unk_18CC->unk_8190;
        p = arg0->unk_18D4;
        if (p != NULL) {
            d = (arg0->unk_3A0->unk_92E0 == 1) ? -1.0f : 1.0f;
            if (d > 0.0f) {
                if (*q < *p) {
                    arg0->unk_18D0 = *q;
                    arg0->unk_18D4 = &arg0->unk_18D0;
                }
            } else {
                if (*q > *p) {
                    arg0->unk_18D0 = *q;
                    arg0->unk_18D4 = &arg0->unk_18D0;
                }
            }
        } else {
            arg0->unk_18D4 = q;
        }
    }
}
