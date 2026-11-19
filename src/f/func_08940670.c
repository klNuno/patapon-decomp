#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 unk_08[0x1B8];
    void *volatile unk_1C0;
} T;

void func_0880416C(void *);
void func_089406E0(void *, s16);
extern u8 D_08A47414[];
extern u8 D_08A474C8[];

T *func_08940670(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        temp->unk_1C0 = D_08A47414;
        if (temp != NULL) {
            temp->unk_1C0 = D_08A474C8;
            func_089406E0(temp->unk_08, -1);
        }
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
