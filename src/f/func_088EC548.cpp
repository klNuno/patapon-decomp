#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x22CC];
    s32 unk_22CC;
    void unk_00(const s32 &n) { unk_22CC += n; }
} A;

typedef struct {
    u8 pad_00[0x14A0];
    A *unk_14A0;
} T;

extern T *D_08AD1F14[];

void func_088EC548(void *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    T *t = D_08AD1F14[0];
    A *a = (t != NULL ? t : NULL)->unk_14A0;
    a->unk_00(*temp);
    func_08852F00(arg1, 0);
}

}
