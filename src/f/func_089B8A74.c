#include "common.h"

void func_089B8A74(s32 *arg0)
{
    u32 i;
    s32 n;
    u8 temp;
    u32 j;
    s32 *p;
    s32 *q;

    i = 0;
    p = arg0;
    do {
        if (*p == -1) {
            n = 0;
        retry:
            temp = 0;
            j = 0;
            q = arg0;
            do {
                if (n == *q) {
                    temp = 1;
                    ++j;
                } else {
                    ++j;
                }
                ++q;
            } while (j < 3U);
            switch (temp) {
            case 0:
                *p = n;
                goto advance;
            }
            ++n;
            goto retry;
        advance:
            ++i;
        } else {
            ++i;
        }
        ++p;
    } while (i < 3U);
}
