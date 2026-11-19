#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x8580 - 0x10];
    u8 unk_8580[0xF140 - 0x8580];
    u8 unk_F140[1];
} T;

void func_0880416C(void *);
void func_088F481C(void *, s16);
void func_088F5478(void *, s16);
void func_0897EB84(void *, s16);

T *func_089AE3C4(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        func_0897EB84(temp->unk_F140, -1);
        func_088F481C(temp->unk_8580, -1);
        func_088F5478(temp->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
