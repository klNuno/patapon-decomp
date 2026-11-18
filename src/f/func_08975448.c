#include "common.h"

typedef struct {
    u8 pad_00[0xE8];
    s32 unk_E8;
    u8 pad_EC[0x1C];
    u8 *unk_108;
} N_08975448;

N_08975448 *func_0896CE18(void *, s32, s32, s32);
void func_0893D8A8(s8 *, u8 *);
void func_088226BC(s8 *, s8 *, ...);
s8 *func_08974E50(s8 *, s32, s8 *);

extern s32 D_08A05504[];
extern s32 D_08A05514[];
extern s32 D_08A05544[];
extern s8 D_08A05558[];

s32 func_08975448(void *arg0, void *arg1, s32 arg2, s32 arg3, u8 **arg4) {
    s8 path[0x80];
    s8 buf[0x80];
    u8 *p;
    N_08975448 *a;
    N_08975448 *b;
    N_08975448 *r;

    p = func_0896CE18(arg1, arg2, 0, 1)->unk_108;
    if (arg4 != NULL) {
        *arg4 = p;
    }
    a = func_0896CE18(arg1, D_08A05504[0], 0, 1);
    func_0893D8A8(path, p + 0x200);
    func_088226BC(buf, D_08A05558, path, D_08A05544[0]);
    b = func_0896CE18(a, D_08A05514[0], 0, 1);
    r = func_0896CE18(b, (s32)func_08974E50(buf, arg3, buf), 0, 1);
    if (r == NULL) {
        return 0;
    }
    return r->unk_E8;
}
