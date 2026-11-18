#include "common.h"

typedef struct E {
    u8 pad_00[0x50];
} E;

typedef struct R {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
    E *unk_18;
    E *unk_1C;
    E *unk_20;
} R;

typedef struct Sub {
    u8 pad_00[0x64];
    u8 unk_64;
    u8 pad_65[0x58B];
    s32 unk_5F0;
    u8 pad_5F4[4];
    R *unk_5F8;
    u8 pad_5FC[0x5C];
} Sub;

typedef struct S {
    u8 pad_00[0x1C];
    Sub unk_1C;
    R unk_674;
    E *unk_698;
    s32 unk_69C;
    E *unk_6A0;
    s32 unk_6A4;
    E *unk_6A8;
    s32 unk_6AC;
} S;

void func_0881F5C0(void *, s32, s32);
void func_08914808(S *, s32, Sub *);

void func_08914554(S *arg0) {
    Sub *sub;
    R *r;

    sub = &arg0->unk_1C;
    func_08914808(arg0, 0, sub);
    sub->unk_64 = 0;
    sub->unk_5F0 = 0;
    func_0881F5C0(&arg0->unk_674, 0, 0x24);
    arg0->unk_674.unk_00 = arg0->unk_69C;
    arg0->unk_674.unk_04 = arg0->unk_6A4;
    arg0->unk_674.unk_08 = arg0->unk_6AC;
    r = &arg0->unk_674;
    if (arg0->unk_69C != 0) {
        func_0881F5C0(arg0->unk_698, 0, arg0->unk_69C * sizeof(E));
    }
    if (arg0->unk_6A4 != 0) {
        func_0881F5C0(arg0->unk_6A0, 0, arg0->unk_6A4 * sizeof(E));
    }
    if (arg0->unk_6AC != 0) {
        func_0881F5C0(arg0->unk_6A8, 0, arg0->unk_6AC * sizeof(E));
    }
    r->unk_18 = arg0->unk_698;
    r->unk_1C = arg0->unk_6A0;
    r->unk_20 = arg0->unk_6A8;
    sub->unk_5F8 = r;
}
