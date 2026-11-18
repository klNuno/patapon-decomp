#include "common.h"

extern "C" {

class V_088E9DE0 {
public:
    virtual s32 v08();
    virtual s32 v0C();
};

typedef struct {
    u8 pad_00[0x3A0];
    V_088E9DE0 unk_3A0;
} R_088E9DE0;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088E9DE0;

typedef struct {
    u8 pad_00[0x14];
    W_088E9DE0 *unk_14;
} O_088E9DE0;

s32 *func_0885356C(s32, s32, s32, s32);
void func_08852F00(s32, s32);
s32 func_08894FBC(R_088E9DE0 *, s32, s32);
R_088E9DE0 *func_08899E18(s32, s32);
s32 func_0888FCFC(s32, s32);

void func_088E9DE0(O_088E9DE0 *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    s32 i;
    s32 r;
    W_088E9DE0 *w;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    w = arg0->unk_14;
    if (w != NULL) {
        if (*a != 0) {
            *b = 0;
            for (i = 0; i < 3; i++) {
                r = func_08894FBC(func_08899E18(arg0->unk_14->unk_36B10, 0), i, 0);
                if (r != 0 && func_0888FCFC(r, 1) != 0) {
                    *b += 1;
                }
            }
        } else {
            *b = func_08899E18(w->unk_36B10, 0)->unk_3A0.v0C();
        }
    }
    func_08852F00(arg1, 0);
}

}
