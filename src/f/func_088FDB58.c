#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S088FDB58;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088EF528(void *, void *);
void *func_088EF608(u8 *, u8 *, char *, s32 *, u8 *);
extern char D_089FE428[];
extern u8 *D_089FE42C[];
extern u8 D_08AD815C[];

void func_088FDB58(S088FDB58 *arg0, void *arg1) {
    s32 sp43C;
    u8 sp18[0x424];
    s32 *a;
    u8 *temp;

    a = func_0885356C(arg1, 0, 1, 4);
    sp43C = *func_0885356C(arg1, 1, 0, 4);
    temp = arg0->unk_10 + 0x131CD8;
    func_088EF528(temp, func_088EF608(sp18, D_089FE42C[*a], D_089FE428, &sp43C, D_08AD815C));
    func_08852F00(arg1, 0);
}
