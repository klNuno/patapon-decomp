#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x614];
    char unk_630[0xD];
    char unk_63D[0x17];
    u8 *unk_654;
    char unk_658[0xD];
    char unk_665[0x1C3];
    u8 unk_828;
} T;

void func_08822B3C(char *, char *);
extern char *D_08A00460[];
extern char *D_08A0046C[];
extern char *D_08A0047C[];
extern char *D_08A0048C[];
extern u8 D_089E5134[];

void func_08914034(T *arg0) {
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    func_08822B3C(arg0->unk_630, D_08A00460[0]);
    func_08822B3C(arg0->unk_63D, D_08A0046C[0]);
    arg0->unk_654 = D_089E5134;
    func_08822B3C(arg0->unk_658, D_08A0047C[0]);
    func_08822B3C(arg0->unk_665, D_08A0048C[0]);
    arg0->unk_828 = 0;
}
