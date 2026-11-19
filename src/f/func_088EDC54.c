#include "common.h"

typedef struct {
    u8 pad_00[0x394];
    s32 unk_394;
} U;

typedef struct {
    u8 pad_00[0x36B10];
    U *unk_36B10;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_088EDC54(S *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    T *temp2 = arg0->unk_14;
    if (temp2 != NULL) {
        temp2->unk_36B10->unk_394 = (u8)!(*temp != 0);
    }
    func_08852F00(arg1, 0);
}
