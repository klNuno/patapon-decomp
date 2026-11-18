#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
} S0896C904_B;

typedef struct {
    char unk_00[0x80];
    s32 unk_80;
    void *unk_84;
    S0896C904_B unk_88;
    u8 pad_A0[0x4];
    void *unk_A4;
} S0896C904;

void func_08822B3C(char *, char *);
u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);
void func_0886A0DC(void *);
void func_0886A164(void *);
s32 func_0888AFAC(S0896C904 *);
void func_0893D718(S0896C904 *, S0896C904 *);
extern char D_089DD078[];
extern char D_089EC4E0[];
extern u8 D_08A44BA4[];
extern u8 D_08A44CF8[];
extern u8 D_08A47EC0[];

S0896C904 *func_0896C904(S0896C904 *arg0) {
    S0896C904_B *p;

    arg0->unk_A4 = D_08A47EC0;
    arg0->unk_84 = D_08A44CF8;
    if (D_089EC4E0 == NULL) {
        func_08822B3C(arg0->unk_00, D_089DD078);
    } else {
        func_08822BC4(D_089EC4E0);
        func_08822D5C(arg0->unk_00, D_089EC4E0, 0x7F);
        arg0->unk_00[0x7F] = 0;
    }
    func_0893D718(arg0, arg0);
    arg0->unk_80 = func_0888AFAC(arg0);
    p = &arg0->unk_88;
    p->unk_14 = D_08A44BA4;
    func_0886A164(p);
    func_0886A0DC(p);
    return arg0;
}
