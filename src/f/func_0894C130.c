#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x2014];
    u8 unk_2018[1];
} T;

void func_0880416C(void *);
void func_0894BF40(void *, s16);
void func_0894C0CC(void *, s16);
void func_0894C1AC(T *);

T *func_0894C130(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        func_0894C1AC(arg0);
        if (temp->unk_04 != NULL) {
            func_0894BF40(temp->unk_2018, 0);
            func_0894C0CC(temp->unk_04, 0);
        }
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
