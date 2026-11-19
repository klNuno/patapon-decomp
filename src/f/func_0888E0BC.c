#include "common.h"

typedef struct T08870CFC {
    struct T08870CFC *unk_00;
    struct T08870CFC *volatile unk_04;
} T08870CFC;

typedef struct {
    s32 unk_00;
} I08870CFC;

void func_088704AC(I08870CFC *, T08870CFC *);
void func_0887043C(I08870CFC *, T08870CFC *, s32);

T08870CFC *func_0888E0BC(T08870CFC *arg0) {
    struct { I08870CFC unk_00; u8 pad_04[4]; } temp;
    I08870CFC temp1;
    T08870CFC *temp2;
    if (arg0->unk_04 == arg0) {
        return NULL;
    }
    temp2 = arg0->unk_04;
    func_088704AC(&temp1, arg0);
    func_0887043C(&temp.unk_00, arg0, temp1.unk_00);
    return temp2;
}
