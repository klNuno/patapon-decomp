#include "common.h"

extern "C" {

class S0 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual s32 unk_44(s32, s32);
};

typedef struct {
    f32 unk_00[2];
} S1;

extern s32 func_08808938(s32, s32);
char *func_088098F8(char *arg0, char *arg1);
s32 func_08809910(s32 *arg0);
s32 func_08809918(s32, s32);
s32 func_08809920(s32, s32);
u8 func_08809928(void *);

void func_08809800(s32 arg0, S0 *arg1, S1 *arg2, s32 arg3) {
    S1 temp = *arg2;

    if (!func_08809928(arg1) || !func_08809918(arg3, func_08809920(8, 0x10))) {
        func_08808938(arg0, -1);
        return;
    }
    if (arg1->unk_1C() < 0) {
        func_08808938(arg0, -1);
        return;
    }
    if (arg1->unk_44(func_08809910((s32 *)&temp), 0) < 0) {
        func_08808938(arg0, -1);
        return;
    }
    func_088098F8((char *)arg0, (char *)&temp);
}

}
