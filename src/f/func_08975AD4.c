#include "common.h"

typedef struct {
    f32 unk_00[3];
    f32 unk_0C;
} Row_08975AD4;

extern void func_0881F120(void *, void *, s32);
extern s32 func_088CB02C(s32);
void func_088CB3F0(f32 *, s32, s32, s32, s32);

void func_08975AD4(s32 *arg0, Row_08975AD4 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 m[4][3];

    func_088CB3F0(m[0], func_088CB02C(*arg0), arg3, arg4, arg2);
    func_0881F120(arg1[0].unk_00, m[0], 0xC);
    func_0881F120(arg1[1].unk_00, m[1], 0xC);
    func_0881F120(arg1[2].unk_00, m[2], 0xC);
    func_0881F120(arg1[3].unk_00, m[3], 0xC);
    arg1[0].unk_0C = 0.0f;
    arg1[1].unk_0C = 0.0f;
    arg1[2].unk_0C = 0.0f;
    arg1[3].unk_0C = 1.0f;
}
