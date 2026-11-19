#include "common.h"

typedef struct {
    u8 pad_00[0x1DC];
    void *unk_1DC;
} S;

typedef struct {
    u8 pad_00[0x14];
    S unk_14;
    void *unk_1F4;
} T;

void func_0880416C(void *);
void func_088F5A84(T *);
extern u8 D_08A4670C[];
extern u8 D_08A46718[];

T *func_088F58F0(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        temp->unk_1F4 = D_08A4670C;
        func_088F5A84(arg0);
        if (&temp->unk_14 != NULL) {
            temp->unk_14.unk_1DC = D_08A46718;
        }
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
