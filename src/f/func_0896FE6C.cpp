#include "common.h"

extern "C" {

void func_0894DE7C(void *, s32, s32, s32, f32);
void func_08957878(s32 arg0);

typedef struct {
    u8 pad_00[0x2980];
    u8 unk_2980[0x24B20 - 0x2980];
    u8 unk_24B20[1];
} T;

void func_0896FE6C(T **arg0, s32 arg1, f32 arg2) {
    T *temp = *arg0;
    func_08957878((s32)temp->unk_2980);
    func_0894DE7C(temp->unk_24B20, 0, arg1, 0, arg2);
}

}
