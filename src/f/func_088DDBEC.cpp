#include "common.h"

extern "C" {

class B_088DDBEC {
public:
    virtual void unk_08(s32);
};

typedef struct {
    u8 pad_00[0x260E0];
    B_088DDBEC **unk_260E0;
    s32 unk_260E4;
} A_088DDBEC;

void func_088DDBEC(A_088DDBEC *arg0, B_088DDBEC *arg1, s32 arg2) {
    B_088DDBEC **p;

    if (arg1 != NULL) {
        if (arg2 != 0) {
            arg1->unk_08(-1);
        }
        p = &arg0->unk_260E0[arg0->unk_260E4];
        if (p != NULL) {
            *p = arg1;
        }
        arg0->unk_260E4++;
    }
}

}
