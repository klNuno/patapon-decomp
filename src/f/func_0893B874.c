#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[0x60];
    char unk_7C[1];
} S;

void func_0889C51C(char *arg0, f32 fparg0);

void func_0893B874(S *arg0) {
    f32 temp = arg0->unk_14 * arg0->unk_18;
    func_0889C51C(arg0->unk_7C, temp);
}
