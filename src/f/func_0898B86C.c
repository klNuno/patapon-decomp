#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x58];
    s32 unk_64[2];
} E_0898B86C;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} R_0898B86C;

R_0898B86C *func_0885AAF8(s32);
E_0898B86C *func_0885AB7C(s32, s32, s32);
s32 func_0893D94C(void *, void *);
void func_0881F5C0(void *, s32, s32);

E_0898B86C *func_0898B86C(s32 *arg0, void *arg1, s32 *arg2) {
    s32 i;
    E_0898B86C *e;
    s32 used[2];
    s32 cnt;
    u32 k;
    u32 m;

    for (i = func_0885AAF8(*arg0)->unk_20 - 1; i >= 0; i--) {
        e = func_0885AB7C(*arg0, 0, i);
        if (func_0893D94C(arg1, &e->unk_08) != 0) {
            continue;
        }
        cnt = 0;
        func_0881F5C0(used, 0, sizeof(used));
        for (k = 0; k < 2; k++) {
            for (m = 0; m < 2; m++) {
                if (e->unk_64[m] == arg2[k] && used[m] == 0) {
                    used[m] = 1;
                    cnt++;
                    break;
                }
            }
        }
        if (cnt == 2) {
            return e;
        }
    }
    return NULL;
}
