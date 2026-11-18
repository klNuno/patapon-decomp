#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    s32 unk_00;
    u8 pad_04[0x100];
} E88EBEEC;

typedef struct {
    u8 pad_00[0x8C4];
    E88EBEEC unk_8C4[18];
} T88EBEEC;

typedef struct {
    u8 pad_00[0x14A0];
    T88EBEEC *unk_14A0;
} S88EBEEC;

extern S88EBEEC *D_08AD1F14[];

void func_088EBEEC(void *arg0, void *arg1) {
    s32 temp;
    S88EBEEC *p;

    temp = *func_0885356C(arg1, 0, 1, 4);
    if (temp < 0x12 && temp >= 0) {
        p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
        p->unk_14A0->unk_8C4[temp].unk_00 = 1;
    }
    func_08852F00(arg1, 0);
}
