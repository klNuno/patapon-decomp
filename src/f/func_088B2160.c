#include "common.h"

typedef struct {
    u8 pad_00[0x104];
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x2090];
    V unk_2090;
} T;

void func_0880416C(void *);

T *func_088B2160(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            V *temp;
            E *temp0;
            s32 temp1;

            temp1 = arg0->unk_2090.unk_04;
            temp0 = arg0->unk_2090.unk_00;
            temp = &arg0->unk_2090;
            if ((u32)temp0 != (u32)(temp0 + temp1)) {
                E *temp2 = *(E *volatile *)&temp->unk_00 + temp1;
                do {
                    ++temp0;
                } while (temp0 != temp2);
            }
            arg0->unk_2090.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
