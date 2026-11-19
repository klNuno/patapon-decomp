#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T;

extern T D_089E4CA0[];

s32 func_0890D0CC(s32 arg0) {
    return D_089E4CA0[arg0].unk_00;
}
