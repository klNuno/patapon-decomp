#include "common.h"

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
void func_088D43C8(void *, f32, f32);

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
} S088EED70;

void func_088EED70(S088EED70 *arg0, void *arg1) {
    f32 *a = func_0885356C(arg1, 0, 1, 4);
    f32 *b = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        func_088D43C8(arg0->unk_14, *a, *b);
    }
    func_08852F00(arg1, 0);
}
