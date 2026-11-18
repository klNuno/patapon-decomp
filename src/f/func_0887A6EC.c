#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    u32 unk_28;
} T;

u16 func_0887A6EC(T *arg0, u32 arg1) {
    f32 temp = 60.0f / (f32)arg0->unk_28;
    return (u16)(temp * ((f32)arg1 / 4096.0f));
}
