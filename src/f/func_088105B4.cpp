#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T;

extern void func_0880DE9C(T *, s32);

void func_088105B4(T *arg0) {
    func_0880DE9C(arg0, arg0->unk_04);
}

}
