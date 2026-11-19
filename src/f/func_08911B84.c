#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    void *unk_1C;
} Unk;

void func_08852F00(void *, s32);
void *func_089AE598(void *);
void func_088F50E8(void *);

void func_08911B84(Unk *arg0, void *arg1)
{
    func_088F50E8(func_089AE598(arg0->unk_1C));
    func_08852F00(arg1, 0);
}
