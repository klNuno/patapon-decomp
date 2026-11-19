#include "common.h"

extern u8 D_08A46BE8[];
typedef struct {
    u8 *unk_00;
    u8 pad_04[0x93C];
    u8 unk_940[0x44F0];
    u8 *unk_4E30;
    u8 pad_4E34[0xC];
    u32 unk_4E40, unk_4E44, unk_4E48;
    f32 unk_4E4C;
} T;
typedef struct T0892CB1C T0892CB1C;
void func_088D4DE4(T0892CB1C *);
extern void func_0891E0E8(void *);

T *func_0891EA10(T *arg0) {
    func_088D4DE4((T0892CB1C *)arg0);
    arg0->unk_00 = D_08A46BE8;
    func_0891E0E8(arg0->unk_940);
    arg0->unk_4E30 = arg0->unk_940;
    arg0->unk_4E48 = 0;
    arg0->unk_4E44 = 0;
    arg0->unk_4E40 = 0;
    arg0->unk_4E4C = 1.0f;
    return arg0;
}
