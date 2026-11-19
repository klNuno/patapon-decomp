#include "common.h"

extern "C" {

class T {
    u8 pad_00[0x4C];

public:
    virtual void unk_08(s16);
};

typedef struct {
    u8 pad_00[0x40];
    T *unk_40;
} S;

extern s32 func_0887E204(s32);

void func_0887E1B0(S *arg0) {
    T *temp = arg0->unk_40;

    if (temp != NULL) {
        if (temp != NULL) {
            temp->unk_08(1);
        }
        arg0->unk_40 = NULL;
    }
    func_0887E204((s32)arg0);
}

}
