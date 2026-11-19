#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[0x324];
    u8 unk_338[0x980];
} T;

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
extern void func_088D6DAC(void *, s32);
void func_089BD6F8(void);

T *func_089BD77C(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        if (temp->unk_338 != NULL) {
            func_08804000(temp->unk_338, (void (*)(void *, s32))func_089BD6F8, 0x4C, 0x20);
        }
        func_088D6DAC(temp->unk_14, -1);
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
