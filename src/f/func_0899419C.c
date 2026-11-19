#include "common.h"

typedef struct O_089BB934 O_089BB934;

typedef struct {
    u32 *unk_00;
    u32 unk_04;
} U;

typedef struct {
    u8 pad_00[0x1064];
    O_089BB934 *unk_1064;
    u8 unk_1068;
    u8 unk_1069;
    u8 pad_106A[0x412];
    U unk_147C;
} T;

void func_089BBBD0(O_089BB934 *);

void func_0899419C(T *arg0) {
    U *temp;
    u32 *ptr;
    u32 count;
    u32 *end;

    arg0->unk_1069 = 1;
    arg0->unk_1068 = 0;
    count = arg0->unk_147C.unk_04;
    ptr = arg0->unk_147C.unk_00;
    temp = &arg0->unk_147C;
    if ((u32)ptr != (u32)(ptr + count)) {
        end = *(u32 *volatile *)&temp->unk_00 + count;
        do {
            ptr++;
        } while (ptr != end);
    }
    arg0->unk_147C.unk_04 = 0;
    func_089BBBD0(arg0->unk_1064);
}
