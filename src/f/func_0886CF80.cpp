#include "common.h"

extern "C" {

class Obj {
public:
    virtual s32 *func_00(void *, s32);
};

typedef struct S {
    s32 unk_00;
    Obj *unk_04;
    void *unk_08;
    s32 *unk_0C;
} S;

void *func_08827A50(s32, s32);
Obj *func_08827AD4(void);
void *func_088D3730(void *, s32, s32);

void func_0886CF80(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp;

    if ((temp = func_08827A50(0x1F90, arg2)) != NULL) {
        temp = func_088D3730(temp, arg2, arg3);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = temp;
    arg0->unk_0C = arg0->unk_04->func_00(temp, arg0->unk_00);
    *arg0->unk_0C = 1;
}

}
