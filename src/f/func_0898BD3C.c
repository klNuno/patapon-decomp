#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} R_0898BD3C;

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[0x5C];
    s32 unk_64[2];
} E_0898BD3C;

extern s32 func_0885AAF8(s32);
extern s32 func_0885AB7C(s32, s32, s32);
s32 func_0893D94C(void *, void *);
void func_0881F120(void *, void *, s32);

void func_0898BD3C(s32 *arg0, void *arg1, s32 *arg2) {
    s32 n;
    s32 i;
    E_0898BD3C *e;
    s32 k;
    u32 j;

    arg2[0] = -1;
    arg2[1] = -1;
    n = ((R_0898BD3C *)func_0885AAF8(*arg0))->unk_20;
    for (i = 0; i < n; i++) {
        e = (E_0898BD3C *)func_0885AB7C(*arg0, 0, i);
        if (func_0893D94C(arg1, e->unk_08) == 0) {
            k = 0;
            for (j = 0; j < 2; j++) {
                if (e->unk_64[j] < 0) {
                    break;
                }
                k++;
            }
            if (k == 2) {
                func_0881F120(arg2, e->unk_64, 8);
                return;
            }
        }
    }
}
