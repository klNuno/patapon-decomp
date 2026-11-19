#include "common.h"

void func_0880406C(void *, void *, void *, s32, s32);
void func_0887FF9C(void *);
void func_08880778(void *, s32);

typedef struct {
    u32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x280];
    void *unk_290;
} T;

T *func_089315A4(T *arg0, void *arg1) {
    arg0->unk_00 = 0;
    func_0880406C(arg0->unk_10, (void *)func_0887FF9C, (void *)func_08880778, 0xA0, 4);
    arg0->unk_290 = arg1;
    return arg0;
}
