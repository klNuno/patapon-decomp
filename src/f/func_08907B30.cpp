#include "common.h"

extern "C" {

class C08907B30 {
public:
    u8 pad_00[0x109AC];
    virtual void func_08(s32);
};

typedef struct {
    u8 pad_00[0x84DC8];
    C08907B30 **unk_84DC8;
    s32 unk_84DCC;
} T08907B30;

void func_08907B30(T08907B30 *arg0, C08907B30 *arg1, s32 arg2) {
    C08907B30 **p;

    if (arg1 != NULL) {
        if (arg2 != 0) {
            arg1->func_08(-1);
        }
        p = arg0->unk_84DC8 + arg0->unk_84DCC;
        if (p != NULL) {
            *p = arg1;
        }
        arg0->unk_84DCC++;
    }
}

}
