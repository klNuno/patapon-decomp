#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} T;

typedef struct {
    u8 pad_00[0x70];
    s32 unk_70;
} U;

void func_08924230(U *, T *);

void func_08920CFC(U *arg0, s32 arg1) {
    T temp;

    temp.unk_08 = 1;
    temp.unk_00 = 0;
    temp.unk_04 = arg1;
    func_08924230(arg0, &temp);
    arg0->unk_70 = arg1;
}
