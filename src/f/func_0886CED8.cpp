#include "common.h"

extern "C" {

class V0886CED8 {
public:
    virtual s32 *unk_08(void *, s32);
};

typedef struct {
    s32 unk_00;
    V0886CED8 *unk_04;
    void *unk_08;
    s32 *unk_0C;
} T0886CED8;

void *func_08827A50(s32, s32);
void *func_0891ED04(void *, s32, s32);
V0886CED8 *func_08827AD4(void);

void func_0886CED8(T0886CED8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p;

    if ((p = func_08827A50(0x1DA0, arg2)) != NULL) {
        p = func_0891ED04(p, arg2, arg3);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = p;
    arg0->unk_0C = arg0->unk_04->unk_08(p, arg0->unk_00);
    *arg0->unk_0C = 1;
}

}
