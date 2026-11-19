#include "common.h"
void func_08880C8C(void *arg0);
typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x90];
} S;
void func_089317E4(S *arg0, s32 arg1) {
    func_08880C8C(arg0[arg1].unk_10);
}
