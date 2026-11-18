#include "common.h"

typedef struct N_088A2C90 {
    s32 unk_00;
    struct N_088A2C90 *unk_04;
    s32 unk_08;
} N_088A2C90;

typedef struct {
    u8 pad_00[0x80];
    u32 unk_80;
    u8 pad_84[0x8];
    N_088A2C90 **unk_8C;
    s32 *unk_90;
    u8 pad_94[0x8];
    N_088A2C90 **unk_9C;
} O_088A2C90;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} A_088A2C90;

void func_0881F5C0(void *, s32, s32);

void func_088A2C90(O_088A2C90 *arg0, A_088A2C90 *arg1) {
    N_088A2C90 *n;
    N_088A2C90 *next;
    u32 i;
    N_088A2C90 **e;

    if (arg1->unk_00 == -1) {
        for (n = arg0->unk_8C[arg1->unk_04]; n != NULL; n = next) {
            next = n->unk_04;
            for (i = 0; i < arg0->unk_80; i++) {
                e = &arg0->unk_9C[i];
                if (*e != NULL && (*e)->unk_08 == n->unk_08) {
                    *e = NULL;
                }
            }
            func_0881F5C0(n, 0, 0x50);
        }
        arg0->unk_8C[arg1->unk_04] = NULL;
        arg0->unk_90[arg1->unk_04] = 0;
    }
}
