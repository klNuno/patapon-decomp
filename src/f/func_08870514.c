#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 pad_2C[4];
    u8 unk_30[0x44];
    void *unk_74;
} T;

void func_0880416C(void *);
void func_088CE530(void *, s32);
void func_089136C0(void *, s32);
extern u8 D_08A450C4[];
extern u8 D_08A450DC[];

T *func_08870514(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        temp->unk_28 = D_08A450C4;
        temp->unk_74 = D_08A450DC;
        func_089136C0(temp->unk_30, 0);
        func_088CE530(temp, 0);
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
