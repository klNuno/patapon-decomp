#include "common.h"

extern "C" {

class E_088A43C4 {
public:
    virtual void v08(s32);
    u8 pad_04[0xA0];
};

typedef struct {
    E_088A43C4 *unk_00;
    s32 unk_04;
} V_088A43C4;

typedef struct {
    u8 pad_00[0x524];
    V_088A43C4 unk_524;
} S_088A43C4;

void func_0880416C(void *);

S_088A43C4 *func_088A43C4(S_088A43C4 *arg0, s16 arg1) {
    E_088A43C4 *p;
    V_088A43C4 *v;
    s32 *sz;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            p = arg0->unk_524.unk_00;
            v = &arg0->unk_524;
            if ((u32)p != (u32)(p + arg0->unk_524.unk_04)) {
                sz = &arg0->unk_524.unk_04;
                do {
                    p->v08(-1);
                    p++;
                } while (p != v->unk_00 + *sz);
            }
            arg0->unk_524.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
