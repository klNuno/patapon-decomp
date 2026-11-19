#include "common.h"

typedef struct Ptr_088843FC Ptr_088843FC;

typedef struct {
    u8 pad_00[0x14];
    u8 *unk_14;
    char unk_18[0x10];
} T;

extern u8 D_08A453B0[];
void *func_08827A50(s32);
void func_088698B4(void *);
void func_088843FC(Ptr_088843FC *arg0, void *arg1, s32 arg2);
char *func_088844EC(char *arg0);

T *func_08884388(void *arg0, s32 arg1)
{
    T *temp;

    if ((temp = (T *)func_08827A50(0x28)) != NULL) {
        func_088698B4(temp);
        temp->unk_14 = D_08A453B0;
        func_088844EC(temp->unk_18);
        func_088843FC((Ptr_088843FC *)temp->unk_18, arg0, arg1);
    }
    return temp;
}
