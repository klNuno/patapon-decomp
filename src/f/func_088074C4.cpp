#include "common.h"

extern "C" {

class S {
public:
    u8 pad_00[8];
    virtual void unk_08(s32);
};

void func_088074C4(S *arg0) {
    arg0->unk_08(-1);
}

}
