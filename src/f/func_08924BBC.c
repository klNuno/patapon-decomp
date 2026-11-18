#include "common.h"

typedef struct O {
    u8 pad_00[0x8];
    u8 unk_08[4];
    void *unk_0C;
} O;

void func_08924E8C(O *);
void func_08924D18(O *);
extern s32 D_08A46E64[];

O *func_08924BBC(O *arg0) {
    u8 *p;

    arg0->unk_0C = D_08A46E64;
    func_08924E8C(arg0);
    p = arg0->unk_08;
    do {
        *p = 0;
        p++;
    } while (p < arg0->unk_08 + 4);
    func_08924D18(arg0);
    return arg0;
}
