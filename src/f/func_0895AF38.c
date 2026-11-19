#include "common.h"

typedef struct {
    u8 pad_00[0x4470];
    u8 unk_4470;
    u8 pad_4471[3];
    f32 unk_4474;
} S;

static inline f32 func_00(f32 arg0) {
    if (arg0 < 0.0f) {
        return 0.0f;
    }
    return arg0;
}

static inline f32 func_04(f32 arg0) {
    if (arg0 > 1.0f) {
        return 1.0f;
    }
    return func_00(arg0);
}

void func_0895AF38(S *arg0, f32 arg1) {
    arg0->unk_4474 = func_04(arg1);
    arg0->unk_4470 = 1;
}
