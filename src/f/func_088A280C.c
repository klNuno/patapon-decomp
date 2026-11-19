#include "common.h"

typedef struct {
    u8 **unk_00;
    u8 *volatile unk_04;
} T;

void func_088A17E8(void *);

void func_088A280C(T *arg0)
{
    u8 *temp = *arg0->unk_00;
    arg0->unk_04 = temp;
    arg0->unk_04 = temp + 0x20;
    func_088A17E8(arg0);
}
