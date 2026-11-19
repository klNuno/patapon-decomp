#include "common.h"

typedef struct {
    u8 pad_00[0x514];
    u8 unk_514[0x10];
    u8 *unk_524;
} T089354F8;

void func_0880416C(void *);
void func_0893536C(void *, s16);
T089354F8 *func_089354F8(T089354F8 *arg0, s16 arg1);
extern u8 D_08A470CC[];

T089354F8 *func_0893555C(T089354F8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_524 = D_08A470CC;
        if (arg0 != NULL) {
            func_0893536C(arg0->unk_514, 0);
            func_089354F8(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
