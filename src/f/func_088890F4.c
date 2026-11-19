#include "common.h"

extern s32 func_08882F6C(s32, s32);
extern void func_0893C4F8(char *);
extern s32 func_088B64A4(s32, s32);

typedef struct {
    u8 pad_00[0xAC];
    s32 unk_AC;
} S;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x620 - 0x14];
    char unk_620[0x38];
    S *unk_658;
    u8 pad_65C[0x14];
    u8 unk_670[0xB0];
    u8 unk_720;
    u8 pad_721[0x9F8 - 0x721];
    u8 unk_9F8;
} T;

void func_088890F4(T *arg0) {
    if (arg0->unk_658->unk_AC == 1) {
        func_08882F6C(arg0->unk_10, 0);
    }
    func_0893C4F8(arg0->unk_620);
    func_088B64A4((s32)arg0->unk_670, 0);
    arg0->unk_9F8 = 0;
    arg0->unk_720 = 0;
}
