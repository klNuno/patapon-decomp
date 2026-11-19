#include "common.h"

void func_088AE380(void *);

typedef struct {
    u8 unk_00[0x40];
} U;

typedef struct {
    u8 pad_00[0x804];
    U *unk_804;
    u32 unk_808;
    u8 pad_80C[4];
    u8 unk_810[0x70];
    u32 unk_880;
    u8 pad_884[0x14];
    u16 unk_898;
    u8 pad_89A[0x7E];
    u8 unk_918;
} T;

void func_088F1C0C(T *arg0)
{
    U *temp;
    u32 count;
    U *volatile *ptr;

    func_088AE380(arg0->unk_810);
    arg0->unk_880 &= ~0x100U;
    arg0->unk_918 = 0;
    arg0->unk_898 = 0;
    count = arg0->unk_808;
    temp = arg0->unk_804;
    ptr = &arg0->unk_804;
    if ((u32)temp != (u32)(temp + count)) {
        U *end = *ptr + count;
        do {
            temp++;
        } while (temp != end);
    }
    arg0->unk_808 = 0;
}
