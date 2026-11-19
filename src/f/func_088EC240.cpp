#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x36B08];
    char *unk_36B08;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} U;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
void func_0887FC9C(char *arg0, f32 fparg0);

void func_088EC240(U *arg0, void *arg1) {
    f32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_0887FC9C(arg0->unk_14->unk_36B08 + 0x1A00, *temp);
    func_08852F00(arg1, 0);
}
}
