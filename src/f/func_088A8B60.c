#include "common.h"

typedef struct {
    void *volatile unk_00;
} T;

void func_0880416C(void *);
extern u8 D_08A44868[];
extern u8 D_08A44884[];
extern u8 D_08A4489C[];
extern u8 D_08A45B08[];

T *func_088A8B60(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        temp->unk_00 = D_08A45B08;
        if (temp != NULL) {
            temp->unk_00 = D_08A44868;
            if (temp != NULL) {
                temp->unk_00 = D_08A44884;
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
