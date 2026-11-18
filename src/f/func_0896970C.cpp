#include "common.h"

extern "C" {

extern void func_0880416C(void *);
extern s32 func_0896ACA8(s32);
void func_089695FC(void *, s32);
void func_089B54E4(void *, s32);

typedef struct {
    u8 pad_00[8];
} E8_0896970C;

typedef struct {
    u8 pad_00[0x94];
} E94_0896970C;

typedef struct {
    u8 pad_00[0x1004];
    E8_0896970C *unk_1004;
    u32 unk_1008;
} PA_0896970C;

typedef struct {
    u8 pad_00[0x25004];
    E94_0896970C *unk_25004;
    u32 unk_25008;
} PB_0896970C;

typedef struct {
    u8 pad_00[0x2020C];
    PB_0896970C unk_2020C;
    u8 pad_45218[4];
    PA_0896970C unk_4521C;
    u8 unk_46228[4];
} S_0896970C;

S_0896970C *func_0896970C(S_0896970C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0896ACA8((s32)arg0);
        func_089B54E4(arg0->unk_46228, -1);
        if (&arg0->unk_4521C != NULL) {
            if (&arg0->unk_4521C != NULL) {
                E8_0896970C *p = arg0->unk_4521C.unk_1004;
                E8_0896970C *&data = arg0->unk_4521C.unk_1004;
                if (p != *(E8_0896970C **)&data + arg0->unk_4521C.unk_1008) {
                    u32 &size = arg0->unk_4521C.unk_1008;
                    do {
                        p++;
                    } while (p != data + size);
                }
                arg0->unk_4521C.unk_1008 = 0;
            }
        }
        if (&arg0->unk_2020C != NULL) {
            E94_0896970C *q = arg0->unk_2020C.unk_25004;
            E94_0896970C *&data2 = arg0->unk_2020C.unk_25004;
            if (q != *(E94_0896970C **)&data2 + arg0->unk_2020C.unk_25008) {
                u32 &size2 = arg0->unk_2020C.unk_25008;
                do {
                    q++;
                } while (q != data2 + size2);
            }
            arg0->unk_2020C.unk_25008 = 0;
        }
        if (arg0 != NULL) {
            func_089695FC(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
