#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} U;

typedef struct {
    U unk_00;
    U unk_0C;
} V;

typedef struct {
    U unk_00;
    f32 unk_0C;
    U unk_10;
    f32 unk_1C;
} T;

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} W;

V *func_088CB558(void *);

s32 func_08975BF8(W **arg0, T *arg1)
{
    V *temp;
    if ((temp = func_088CB558((*arg0)->unk_10)) != 0) {
        f32 a, b, c, d, e, f;
        f = temp->unk_0C.unk_08;
        e = temp->unk_0C.unk_04;
        d = temp->unk_00.unk_08;
        c = temp->unk_00.unk_04;
        b = temp->unk_00.unk_00;
        a = temp->unk_0C.unk_00;
        arg1->unk_00.unk_00 = a;
        arg1->unk_00.unk_04 = e;
        arg1->unk_00.unk_08 = f;
        arg1->unk_0C = 1.0f;
        arg1->unk_10.unk_00 = b;
        arg1->unk_10.unk_04 = c;
        arg1->unk_10.unk_08 = d;
        arg1->unk_1C = 1.0f;
        return 1;
    }
    return 0;
}
