#include "common.h"

void func_08858024(s32);
extern s32 func_088581B0(s32);
f32 func_08856234(f32);

typedef struct {
    u8 pad_00[0x38];
    f32 unk_38;
    u8 pad_3C[4];
} T;

f32 func_0885A8D8(void) {
    T temp;
    f32 temp2;

    func_08858024(1);
    func_088581B0((s32)&temp);
    func_08858024(2);
    temp2 = func_08856234(45.0f);
    return 136.0f / (-temp.unk_38 * temp2);
}
