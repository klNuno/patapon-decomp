#include "common.h"

struct T {
    u8 pad_00[0xA8070];
    u8 unk_A8070;
    u8 pad_A8071[3];
    f32 unk_A8074;
};

inline f32 unk_00(f32 arg0) {
    if (arg0 < 0.0f) {
        return 0.0f;
    }
    return arg0;
}

inline f32 unk_04(f32 arg0) {
    if (arg0 > 1.0f) {
        return 1.0f;
    }
    return unk_00(arg0);
}

extern "C" {
void func_08867B1C(T *arg0, f32 arg1) {
    arg0->unk_A8074 = unk_04(arg1);
    arg0->unk_A8070 = 1;
}
}
