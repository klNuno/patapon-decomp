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

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[4];
} T0886D028;

extern u8 D_08A44DE8[];

void *func_08827A50(s32, s32);
Obj *func_08827AD4(void);
void func_0886E47C(void *, s32, void *, s32, s32);
void func_088B7A54(void *);

void func_0886D028(S *arg0, s32 arg1, s32 arg2, void *arg3) {
    T0886D028 *temp;

    if ((temp = (T0886D028 *)func_08827A50(0x1630, arg2)) != NULL) {
        func_0886E47C(temp, arg2, arg3, 0, -1);
        temp->unk_50 = D_08A44DE8;
        temp->unk_1510 = 0;
        func_088B7A54(temp->unk_1514);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = temp;
    arg0->unk_0C = arg0->unk_04->func_00(temp, arg0->unk_00);
    *arg0->unk_0C = 1;
}

}
