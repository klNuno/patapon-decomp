#include "common.h"

extern "C" {

s32 func_088586E8(void);
s32 func_089B53CC(s32);
void func_0887BD74(s32, s32, s32);

struct T {
    s32 unk_00;
};

void func_0887BD2C(T arg0, T arg1) {
    T temp0 = arg0;
    T temp1 = arg1;
    s32 temp = func_089B53CC(func_088586E8());
    func_0887BD74(temp, temp0.unk_00, temp1.unk_00);
}

}
