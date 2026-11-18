#include "common.h"

typedef struct Obj_08948970 {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x3410 - 0x1504];
    u8 unk_3410[0x1AC78 - 0x3410];
    s32 unk_1AC78;
    u8 pad_1AC7C[4];
    s32 unk_1AC80;
} Obj_08948970;

extern s32 func_0887ED88(s32, s32);
void func_089483A8(Obj_08948970 *);
void func_08949388(void *, s32);
s32 func_0894A1E4(void *);
void func_0894A1EC(void *);

void func_08948970(Obj_08948970 *arg0) {
    func_08949388(arg0->unk_3410, arg0->unk_1500);
    if (func_0894A1E4(arg0->unk_3410) != 0) {
        func_089483A8(arg0);
        arg0->unk_1AC78 = 0;
        arg0->unk_1AC80 = 4;
    }
    if (func_0887ED88(arg0->unk_1500, 0x4000) != 0) {
        arg0->unk_1AC80 = 1;
        func_0894A1EC(arg0->unk_3410);
    }
}
