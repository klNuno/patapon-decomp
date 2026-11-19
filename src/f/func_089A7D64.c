#include "common.h"

typedef struct W W;

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[1];
} A;

typedef struct {
    u8 pad_00[0x114];
    A *unk_114;
} B;

typedef struct {
    u8 pad_00[0x10];
    B *unk_10;
} Obj;

s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08992D48(W *);
void func_08852F00(void *, s32);

void func_089A7D64(Obj *arg0, void *arg1)
{
    s32 *p = func_0885356C(arg1, 0, 1, 4);
    A *a = arg0->unk_10->unk_114;

    if (a != NULL) {
        W *temp = (W *)a->unk_14;
        if (temp != NULL) {
            *p = func_08992D48(temp);
        }
    }
    func_08852F00(arg1, 0);
}
