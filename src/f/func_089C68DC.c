#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x10A40 - 4];
    f32 unk_10A40;
    f32 unk_10A44;
} T;

s32 func_089D1AC8(void *);
void func_089D1C60(void *);
void func_089D1CA4(void *, f32 *);
f32 *func_089D1D40(void *);

void func_089C68DC(T *arg0) {
    f32 temp[2];
    f32 temp1;
    f32 temp2;

    if (func_089D1AC8(arg0->unk_04)) {
        temp1 = arg0->unk_10A44;
        temp2 = arg0->unk_10A40 - 0.5f * *func_089D1D40(arg0->unk_04);
        temp[1] = temp1;
        temp[0] = temp2;
        func_089D1CA4(arg0->unk_04, temp);
        func_089D1C60(arg0->unk_04);
    }
}
