#include "common.h"
extern "C" {
typedef struct {
    u32 unk_00;
    u32 unk_04;
} S;
s32 func_08813158(S *arg0, u32 arg1);
s32 func_0881313C(S *arg0) {
    return func_08813158(arg0, arg0->unk_04);
}
}
