#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E88ED230;

typedef struct {
    u8 pad_00[0x1AC8];
    u32 unk_1AC8;
    E88ED230 unk_1ACC[1];
} T88ED230;

typedef struct {
    u8 pad_00[0x14A0];
    T88ED230 *unk_14A0;
} S88ED230;

extern S88ED230 *D_08AD1F14[];

void func_088ED230(void *arg0, void *arg1) {
    s32 *temp;
    S88ED230 *p;
    T88ED230 *m;
    s32 sum;
    u32 i;

    temp = func_0885356C(arg1, 0, 1, 4);
    sum = 0;
    p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    m = p->unk_14A0;
    for (i = 0; i < m->unk_1AC8; i++) {
        if (m->unk_1ACC[i].unk_04 > 0 && m->unk_1ACC[i].unk_00 == 0x14) {
            sum += m->unk_1ACC[i].unk_04;
        }
    }
    *temp = sum;
    func_08852F00(arg1, 0);
}
