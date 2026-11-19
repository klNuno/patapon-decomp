#include "common.h"

extern "C" {

class T {
    u8 pad_00[0x2760];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
};

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} S;

void func_08814BB4(s32);
T *func_089AE5B0(S *);

void func_089AE514(S *arg0) {
    if (arg0->unk_08 != -1) {
        func_08814BB4(4);
        func_089AE5B0(arg0)->unk_20();
    }
}

}
