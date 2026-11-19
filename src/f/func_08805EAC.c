#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
} R08805E10;

typedef struct {
    R08805E10 *unk_00;
    R08805E10 *unk_04;
} E08805E10;

extern E08805E10 D_08A490C8[];
extern R08805E10 *volatile D_08A490CC[];

s32 func_08805EAC(R08805E10 *arg0, R08805E10 *arg1) {
    s32 i = 0;
    E08805E10 *temp = D_08A490C8;

    do {
        if (temp->unk_00 == NULL) {
            D_08A490C8[i].unk_00 = arg0;
            D_08A490CC[i * 2] = arg1;
            D_08A490CC[i * 2] = (R08805E10 *)((u8 *)arg1 - 0xC);
            return i;
        }
        i++;
        temp++;
    } while (i < 16);

    return -1;
}
