#include "common.h"

void func_08977494(s32);
void func_08991CD8(s32, s32);

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T089766B0_B;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    T089766B0_B *unk_0C;
} T089766B0;

s32 func_089766B0(T089766B0 *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    switch (arg0->unk_00) {
    case 1:
        if (arg0->unk_04 != 0) {
            func_08991CD8(arg1, arg0->unk_04);
        }
        break;
    case 2:
        if (arg0->unk_08 == 0) {
            return 0;
        }
        func_08977494(arg0->unk_08);
        break;
    }
    arg0->unk_0C->unk_04 = arg0->unk_0C->unk_00;
    return 1;
}
