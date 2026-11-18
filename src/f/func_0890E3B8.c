#include "common.h"

typedef struct {
    u8 pad_00[0x60];
} E_0890E3B8;

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    s32 unk_D88;
    s32 unk_D8C;
} S_0890E3B8;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
void *func_08807190(s32, void *);
void func_0886A528(void *, E_0890E3B8 *);
E_0890E3B8 *func_0890E47C(void *);
E_0890E3B8 *func_0890E498(void *);
E_0890E3B8 *func_0890E4A0(void *);
s32 func_0890E4A8(void *);

S_0890E3B8 *func_0890E3B8(S_0890E3B8 *arg0, S_0890E3B8 *arg1) {
    E_0890E3B8 *s;
    E_0890E3B8 *p;
    void *temp;

    arg0->unk_00 = D_08A44C14;
    arg0->unk_00 = D_08A44C60;
    arg0->unk_D88 = func_0890E4A8(arg0->unk_04);
    arg0->unk_D8C = arg1->unk_D8C;
    s = func_0890E4A0(arg1->unk_04);
    for (p = func_0890E498(arg0->unk_04); p != func_0890E47C(arg0->unk_04); p++) {
        temp = func_08807190(0x60, p);
        if (temp != NULL) {
            func_0886A528(temp, s++);
        }
    }
    return arg0;
}
