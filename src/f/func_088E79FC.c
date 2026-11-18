#include "common.h"

typedef struct P {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} P;

typedef struct Q {
    u8 pad_00[0x35C];
    s32 unk_35C;
} Q;

typedef struct O {
    u8 pad_00[0x14];
    P *unk_14;
} O;

s32 func_08899E18(s32, s32);
Q *func_08894FBC(s32, s32, s32);
Q *func_08890D90(Q *, s32);

s32 func_088E79FC(O *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 ret;
    P *p;
    Q *q;
    s32 b;

    p = arg0->unk_14;
    ret = 0;
    if (p != NULL) {
        switch (arg1) {
        case 0:
        case 1:
        case 4:
            b = 1;
            if (arg1 == 4) {
                b = 0;
            }
            q = func_08894FBC(func_08899E18(p->unk_36B10, b), arg2, 1);
            if (q != NULL) {
                ret = q->unk_35C;
            }
            break;
        case 3:
            break;
        case 6:
            q = func_08894FBC(func_08899E18(p->unk_36B10, arg3), arg4, 1);
            if (q != NULL) {
                q = func_08890D90(q, arg5);
                if (q != NULL) {
                    ret = q->unk_35C;
                }
            }
            break;
        }
    }
    return ret;
}
