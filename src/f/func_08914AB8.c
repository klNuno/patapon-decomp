#include "common.h"

void func_088226BC(char *, char *, ...);
extern s32 D_08A00450[];
extern char D_08A0052C[];

typedef struct {
    u8 pad_00[0x3C];
    u8 unk_3C[0x10];
    u8 unk_4C[1];
} T;

typedef struct {
    u8 pad_00[0x1C];
    T unk_1C;
    u8 pad_69[0x720 - 0x69];
    char unk_720[1];
} S;

char *func_08914AB8(S *arg0) {
    T *temp = &arg0->unk_1C;
    func_088226BC(arg0->unk_720, D_08A0052C, D_08A00450[0], temp->unk_3C, temp->unk_4C);
    return arg0->unk_720;
}
