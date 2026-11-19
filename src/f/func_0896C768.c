#include "common.h"

typedef struct {
    u8 pad_00[0x88];
    u8 unk_88[0x1C];
    u8 *volatile unk_A4;
} T;

void func_0880416C(void *);
void func_08869628(void *, s16);
void func_0886A40C(void *, s16);
extern u8 D_08A47ECC[];
extern u8 D_08A47EC0[];

T *func_0896C768(T *arg0, s16 arg1) {
    s16 temp = arg1;
    T *temp2 = arg0;

    if (temp2 != NULL) {
        temp2->unk_A4 = D_08A47ECC;
        if (temp2 != NULL) {
            temp2->unk_A4 = D_08A47EC0;
            func_08869628(temp2->unk_88, -1);
            func_0886A40C(temp2, -1);
        }
        if (temp > 0) {
            func_0880416C(temp2);
        }
    }
    return temp2;
}
