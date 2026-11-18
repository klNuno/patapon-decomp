#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x624];
    char unk_630[0xD];
    char unk_63D[0x17];
    void *unk_654;
    char unk_658[0xD];
    char unk_665[0x33];
    s32 unk_698;
    s32 unk_69C;
    s32 unk_6A0;
    s32 unk_6A4;
    s32 unk_6A8;
    s32 unk_6AC;
    u8 pad_6B0[0x174];
    void *unk_824;
} S_08913E3C;

extern u8 D_08A46A0C[];
extern u8 D_08A469FC[];
extern char *D_08A00460[];
extern char *D_08A0046C[];
extern char *D_08A0047C[];
extern char *D_08A0048C[];
extern u8 D_089E5134[];
extern u8 D_089E5128[];
extern s32 D_08AD879C[];
extern char D_08A00510[];
extern char D_08A00524[];

void func_08822B3C(char *, char *);
void func_08914034(S_08913E3C *);
s32 func_08913E04(s32, s32, void *);
s32 sceKernelCreateCallback(const char *, s32 (*)(s32, s32, void *), void *);
s32 sceIoDevctl(const char *, s32, void *, s32, void *, s32);

S_08913E3C *func_08913E3C(S_08913E3C *arg0, s32 arg1, s32 arg2) {
    s32 cb;

    arg0->unk_00 = D_08A46A0C;
    arg0->unk_00 = D_08A469FC;
    arg0->unk_04 = arg1;
    arg0->unk_08 = arg2;
    func_08822B3C(arg0->unk_630, D_08A00460[0]);
    func_08822B3C(arg0->unk_63D, D_08A0046C[0]);
    arg0->unk_654 = D_089E5134;
    func_08822B3C(arg0->unk_658, D_08A0047C[0]);
    func_08822B3C(arg0->unk_665, D_08A0048C[0]);
    arg0->unk_698 = 0;
    arg0->unk_69C = 0;
    arg0->unk_6A0 = 0;
    arg0->unk_6A4 = 0;
    arg0->unk_6A8 = 0;
    arg0->unk_6AC = 0;
    arg0->unk_824 = D_089E5128;
    func_08914034(arg0);
    if (D_08AD879C[0] == 0) {
        D_08AD879C[0] = sceKernelCreateCallback(D_08A00510, func_08913E04, arg0);
        if (D_08AD879C[0] > 0) {
            cb = D_08AD879C[0];
            sceIoDevctl(D_08A00524, 0x02415821, &cb, 4, NULL, 0);
        }
    }
    return arg0;
}
