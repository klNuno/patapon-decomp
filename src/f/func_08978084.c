#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x460];
    s32 unk_470;
} Obj_08978084;

extern void *D_08AD8DD8[];
void func_089919DC(void *);
void func_089788D0(Obj_08978084 *);
void func_0892E740(void *, s32);

void func_08978084(Obj_08978084 *arg0) {
    void *temp2;

    switch (arg0->unk_470) {
    case 1:
        func_089919DC(arg0->unk_10);
        break;
    case 2:
        func_089788D0(arg0);
        func_089919DC(arg0->unk_10);
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        func_089788D0(arg0);
        break;
    case 8:
    case 9:
    case 10:
        func_089788D0(arg0);
        func_089919DC(arg0->unk_10);
        break;
    }
    temp2 = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
    func_0892E740(temp2, 0);
}
