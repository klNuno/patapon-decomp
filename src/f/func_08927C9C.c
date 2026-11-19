#include "common.h"

typedef struct T0 {
    u8 pad_00[4];
    struct T0 *volatile unk_04;
} T0;

void func_08927474(s32 *, T0 *);
void func_08927404(s32 *, T0 *, s32);

T0 *func_08927C9C(T0 *arg0)
{
    struct {
        s32 unk_00;
        u8 pad_04[4];
    } a;
    s32 b;
    T0 *temp;

    if (arg0->unk_04 == arg0) {
        return NULL;
    }
    temp = arg0->unk_04;
    func_08927474(&b, arg0);
    func_08927404(&a.unk_00, arg0, b);
    return temp;
}
