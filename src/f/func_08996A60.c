#include "common.h"

void func_08996A60(s32 *arg0)
{
    u32 temp;
    s32 temp1;
    u8 temp2;
    u32 temp3;
    s32 *temp4;
    s32 *temp5;
    s32 temp6 = 1;
    s32 temp7 = -1;

    temp = 0;
    temp4 = arg0;
    do {
        if (*temp4 == temp7) {
            temp1 = 0;
        loop:
            temp2 = 0;
            temp3 = 0;
            temp5 = arg0;
            do {
                if (temp1 == *temp5) {
                    temp2 = temp6;
                    temp3++;
                } else {
                    temp3++;
                }
                temp5++;
            } while (temp3 < 3);
            if (temp2 != 0) {
                temp1++;
                goto loop;
            } else {
                *temp4 = temp1;
            }
            temp++;
        } else {
            temp++;
        }
        temp4++;
    } while (temp < 3);
}
