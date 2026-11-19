#include "common.h"

void func_08822B3C(char *, char *);
extern char D_089DE618[];

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    f32 unk_04;
    char unk_08[1];
} S;

S *func_0888C958(S *arg0) {
    arg0->unk_04 = 1.0f;
    arg0->unk_00 = 0;
    func_08822B3C(arg0->unk_08, D_089DE618);
    return arg0;
}
