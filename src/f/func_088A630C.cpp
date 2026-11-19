#include "common.h"

extern "C" {
typedef struct { u32 unk_00[0x10]; } T;
typedef struct S_088A63E4 S_088A63E4;

T *func_088A635C(T *arg0, T *arg1);
S_088A63E4 *func_088A63E4(S_088A63E4 *arg0, S_088A63E4 *arg1);

typedef struct {
    u8 pad_00[8];
    T unk_08;
} UnkObject;

typedef struct {
    u8 pad_00[0x10];
    T unk_10;
} UnkLocal;

void func_088A630C(UnkObject *arg0, UnkObject *arg1)
{
    UnkLocal temp;
    T *b;
    T *a;
    a = &arg0->unk_08;
    b = &arg1->unk_08;
    func_088A63E4((S_088A63E4 *)&temp.unk_10, (S_088A63E4 *)a);
    func_088A635C(a, b);
    func_088A635C(b, &temp.unk_10);
}
}
