#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} S;

extern S D_089E4CA4[];

s32 func_0890D09C(s32 arg0) {
    return D_089E4CA4[arg0].unk_00;
}
