#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} S_0890D084;

extern S_0890D084 D_089E4D3C[];

s32 func_0890D084(s32 arg0) {
    return D_089E4D3C[arg0].unk_00;
}
