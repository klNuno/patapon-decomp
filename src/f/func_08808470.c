#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x24];
    void *unk_28;
    u8 pad_2C[0x1F];
    u8 unk_4B;
} T;

void func_08804150(void *);
void func_0880416C(void *);
void func_08807954(void *, s16);
extern u8 D_08A44620[];

T *func_08808470(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        temp->unk_00 = D_08A44620;
        if (temp->unk_4B != 0) {
            func_08804150(temp->unk_28);
        }
        func_08807954(temp, 0);
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
