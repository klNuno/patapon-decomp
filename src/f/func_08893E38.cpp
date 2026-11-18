#include "common.h"

extern "C" {

class Unk_08893E38_Sub {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};

typedef struct Unk_08893E38 {
    u8 pad_00[0xD40];
    Unk_08893E38_Sub unk_D40;
} Unk_08893E38;

void func_08893EC4(void *, s32);
void *func_08893FFC(Unk_08893E38_Sub *);

s32 func_08893E38(Unk_08893E38 *arg0, s32 arg1) {
    s32 temp;
    void *temp2;

    temp = arg0->unk_D40.unk_0C();
    if (temp >= arg0->unk_D40.unk_10()) {
        return 0;
    }
    temp2 = func_08893FFC(&arg0->unk_D40);
    if (temp2 != NULL) {
        func_08893EC4(temp2, arg1);
    }
    return 1;
}

}
