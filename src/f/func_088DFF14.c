#include "common.h"

typedef struct {
    u8 pad_00[0x1B1B0];
    u8 unk_1B1B0[0x448];
    u8 unk_1B5F8[0x10858];
    u8 unk_2BE50[1];
} Unk_088DFF14;

typedef struct Unk0 Unk0;

void func_088E32BC(void *);
void func_088F7510(void *, void *);
void func_0898FA48(Unk0 *arg0, void *arg1);

void func_088DFF14(Unk_088DFF14 *arg0, void *arg1)
{
    func_088E32BC(arg0->unk_1B1B0);
    func_088F7510(arg0->unk_1B5F8, arg1);
    func_0898FA48((Unk0 *)arg0->unk_2BE50, arg1);
}
