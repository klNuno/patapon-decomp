#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    u8 *unk_36B10;
} S_088EACAC;

typedef struct {
    u8 pad_00[0x14];
    S_088EACAC *unk_14;
} Obj_088EACAC;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089401FC(void *, s32, s32 *, s32 *);

void func_088EACAC(Obj_088EACAC *arg0, void *arg1) {
    s32 *temp_s0;
    s32 *temp_s1;
    s32 *temp_v0;

    temp_s0 = func_0885356C(arg1, 0, 1, 4);
    temp_s1 = func_0885356C(arg1, 1, 1, 4);
    temp_v0 = func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_14 != NULL) {
        func_089401FC(arg0->unk_14->unk_36B10 + 0x1040, *temp_s0, temp_s1, temp_v0);
    }
    func_08852F00(arg1, 0);
}
