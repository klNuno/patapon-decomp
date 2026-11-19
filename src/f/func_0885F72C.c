#include "common.h"

typedef struct S {
    struct S *unk_00;
    struct S *volatile unk_04;
} S;

void func_0885E988(s32 *, S *, s32);
void func_0885E9F8(s32 *arg0, char *arg1);

S *func_0885F72C(S *arg0) {
    struct { s32 unk_00; u8 pad_04[4]; } temp;
    s32 temp1;
    S *temp2;
    if (arg0->unk_04 == arg0) {
        return NULL;
    }
    temp2 = arg0->unk_04;
    func_0885E9F8(&temp1, (char *)arg0);
    func_0885E988(&temp.unk_00, arg0, temp1);
    return temp2;
}
