#include "common.h"

void func_08865EE0(void *);
void func_088CE4F4(void *, s32);
extern u8 D_08A46CA0[];

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    s32 unk_2C;
    u8 unk_30;
} T;

T *func_0892081C(T *arg0, s32 arg1) {
    func_088CE4F4(arg0, 0);
    arg0->unk_28 = D_08A46CA0;
    arg0->unk_2C = arg1;
    func_08865EE0(&arg0->unk_30);
    return arg0;
}
