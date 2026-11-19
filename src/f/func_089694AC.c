#include "common.h"

typedef struct {
    u8 unk_00[8];
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} S;

typedef struct {
    u8 pad_00[0x1004];
    S unk_1004;
} T;

void func_0880416C(void *);

T *func_089694AC(T *arg0, s16 arg1)
{
    T *temp = arg0;
    S *p;
    E *cur;
    s32 n;

    if (temp != NULL) {
        if (temp != NULL) {
            n = temp->unk_1004.unk_04;
            cur = temp->unk_1004.unk_00;
            p = &temp->unk_1004;
            if ((u32)cur != (u32)(cur + n)) {
                do {
                    ++cur;
                } while (cur != p->unk_00 + n);
            }
            temp->unk_1004.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
