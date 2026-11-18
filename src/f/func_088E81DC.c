#include "common.h"
typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} G;
typedef struct {
    u8 pad_00[0x14];
    G *unk_14;
} T;
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern void func_0888FDE0(s32);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);
void func_088E81DC(T *arg0, void *arg1) {
    s32 *a;
    u32 *b;
    s32 r;
    a = func_0885356C(arg1, 0, 1, 4);
    b = (u32 *)func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        r = func_08894FBC((s32)func_08899E18(arg0->unk_14->unk_36B10, *b), *a, 0);
        if (r != 0) {
            func_0888FDE0(r);
        }
    }
    func_08852F00(arg1, 0);
}
