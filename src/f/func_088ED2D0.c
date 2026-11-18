#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x654];
    s32 unk_654;
    u8 pad_658[8];
    s32 unk_660;
    u8 pad_664[0xA0];
} E88ED2D0;

typedef struct {
    u8 pad_00[0x188];
} G88ED2D0;

typedef struct {
    u8 pad_00[0x264];
    G88ED2D0 unk_264[3];
} T88ED2D0;

typedef struct {
    u8 pad_00[0x14A0];
    T88ED2D0 *unk_14A0;
} S88ED2D0;

extern S88ED2D0 *D_08AD1F14[];

void func_088ED2D0(void *arg0, void *arg1) {
    s32 *temp;
    S88ED2D0 *p;
    s32 var_t1;
    s32 i;
    s32 j;
    G88ED2D0 *var_a2;
    E88ED2D0 *var_a1;
    s32 temp_a0;

    temp = func_0885356C(arg1, 0, 1, 4);
    var_t1 = 0;
    p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    var_a2 = p->unk_14A0->unk_264;
    var_a1 = (E88ED2D0 *)var_a2;
    for (i = 0; i < 3; i++, var_a2++) {
        temp_a0 = *(s16 *)((u8 *)var_a2 + 0x1AA);
        for (j = 0; j < temp_a0; j++, var_a1 = (E88ED2D0 *)((u8 *)var_a1 + 0x104)) {
            if (var_a1->unk_654 == 0 && var_a1->unk_660 == 0) {
                var_t1++;
            }
        }
    }
    *temp = var_t1;
    func_08852F00(arg1, 0);
}
