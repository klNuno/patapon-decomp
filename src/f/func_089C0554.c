#include "common.h"

typedef struct {
    u8 pad_00[0xA40];
    u8 *unk_A40;
    u8 unk_A44;
} S_089C0554;

s32 func_089BFF44(void *arg0, s32 arg1, void *arg2, void *arg3);

s32 func_089C0554(S_089C0554 *arg0, s32 arg1, void *arg2) {
    return func_089BFF44(&arg0->unk_A44, arg1, arg0->unk_A40 + 8, arg2);
}
