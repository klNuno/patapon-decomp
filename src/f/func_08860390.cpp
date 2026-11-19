#include "common.h"

extern "C" {

class T {
    u8 pad_00[8];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
    u8 pad_0C[0x14];
    u8 unk_20;
} S;

extern u8 D_08A44AE8[];
void func_0880416C(void *);
void func_0885EE18(void *, s16);
void func_0895EFE4(void *, s32);

S *func_08860390(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A44AE8;
        ((T *)arg0)->unk_18();
        func_0885EE18(&arg0->unk_20, -1);
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
