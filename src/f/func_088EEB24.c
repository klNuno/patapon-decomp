#include "common.h"

typedef struct {
    void *volatile unk_00;
} T;

void func_0880416C(void *);
extern u8 D_08A46608[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];
extern u8 D_08A465EC[];

T *func_088EEB24(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        temp->unk_00 = D_08A465EC;
        if (temp != NULL) {
            temp->unk_00 = D_08A46608;
            if (temp != NULL) {
                temp->unk_00 = D_08A45598;
                if (temp != NULL) {
                    temp->unk_00 = D_08A4489C;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
