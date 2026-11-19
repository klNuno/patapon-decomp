#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
} T0;

typedef struct {
    T0 *unk_00;
    u32 unk_04;
} T1;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C;
    u8 pad_0D[0xF83];
    T1 unk_F90;
} T;

void func_0899D4D4(s32);
void func_089A09D8(void *);

void func_08999B48(T *arg0) {
    u32 temp = 0;
    if (arg0->unk_F90.unk_04 != 0) {
        T1 *temp3;
        u32 temp2 = 0;
        temp3 = &arg0->unk_F90;
        do {
            func_0899D4D4(((T0 *)((u8 *)temp3->unk_00 + temp2))->unk_08);
            ++temp;
            temp2 += sizeof(T0);
        } while (temp < arg0->unk_F90.unk_04);
    }
    func_089A09D8(&arg0->unk_0C);
}
