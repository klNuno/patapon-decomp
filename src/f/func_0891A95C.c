#include "common.h"

typedef struct {
    u8 pad_00[0x6D0];
    void *unk_6D0;
} S_0891AB5C;

void func_088F232C(void *, s32);
void func_0891AA50(S_0891AB5C *, void *);
extern u8 D_08A46B48[];

S_0891AB5C *func_0891A95C(S_0891AB5C *arg0) {
    arg0->unk_6D0 = D_08A46B48;
    func_088F232C(arg0, 1);
    func_0891AA50(arg0, arg0);
    return arg0;
}
