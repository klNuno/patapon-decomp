#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    u8 unk_30[0x90];
    u8 unk_C0[0x90];
    u8 unk_150[0x90];
    u8 unk_1E0[0x120];
    u8 unk_300[0x90];
    u8 unk_390[0x1350];
    u8 unk_16E0[4];
} S_089BBA80;

typedef struct {
    u8 pad_00[0x390];
    u8 unk_390[0x90];
} E_089BBA80;

extern void *D_08AD1E28[];
extern char D_089F26A0[];
extern char D_08A08ECC[];
extern char D_08A08EDC[];
extern char D_08A08EEC[];
extern char D_08A08EFC[];
extern char D_08A08F0C[];
extern char D_08A08F1C[];

void func_088226BC(char *, char *, ...);
void func_08865FE4(void *, s32);
s32 func_08868CAC(void *, s32, char *, s32);
void func_089A5784(void *, char *, f32);

void func_089BBA80(S_089BBA80 *arg0) {
    void *g;
    u32 i;
    E_089BBA80 *e;
    char buf[0x20];

    func_089A5784(arg0->unk_16E0, D_089F26A0, 0.0f);
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08865FE4(arg0->unk_30, func_08868CAC(g, 0xA, D_08A08ECC, 1));
    func_08865FE4(arg0->unk_C0, func_08868CAC(g, 0xA, D_08A08EDC, 1));
    func_08865FE4(arg0->unk_150, func_08868CAC(g, 0xA, D_08A08EEC, 1));
    func_08865FE4(arg0->unk_1E0, func_08868CAC(g, 0xA, D_08A08EFC, 1));
    func_08865FE4(arg0->unk_300, func_08868CAC(g, 0xA, D_08A08F0C, 1));
    for (i = 0, e = (E_089BBA80 *)arg0; i < 10; i++, e = (E_089BBA80 *)((u8 *)e + 0x90)) {
        func_088226BC(buf, D_08A08F1C, i + 0x14);
        func_08865FE4(e->unk_390, func_08868CAC(g, 0xA, buf, 1));
    }
}
