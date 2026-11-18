#include "common.h"

extern "C" {

class V_08940968 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

typedef struct {
    s32 unk_00;
    s32 *unk_04;
} H_08940968;

typedef struct {
    s32 unk_00;
    V_08940968 *unk_04;
    H_08940968 unk_08;
} T08940968;

void func_08891578(s32, s32);

void func_08940968(T08940968 *arg0) {
    H_08940968 *h;
    s32 **rc;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            h = &arg0->unk_08;
            if (h->unk_00 != 0) {
                rc = &arg0->unk_08.unk_04;
                *arg0->unk_08.unk_04 -= 1;
                if ((arg0->unk_08.unk_04 != NULL ? *arg0->unk_08.unk_04 : 0) == 0) {
                    arg0->unk_04->unk_0C(h->unk_00, *rc, arg0->unk_00);
                    func_08891578(h->unk_00, arg0->unk_00);
                }
            }
        }
    }
}

}
