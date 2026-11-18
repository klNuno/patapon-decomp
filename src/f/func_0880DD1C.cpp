#include "common.h"

extern "C" {

class C_0880DD1C {
public:
    virtual void v08(s32);
};

typedef struct {
    void *unk_00;
} S_0880DD1C;

void func_0880D9B0(void *);
u32 func_0880C7A8(void *);
void func_0880DE18(void *, u32);
C_0880DD1C *func_0880DCF4(void *);
S_0880DD1C *func_0880C758(void *, u32);

void func_0880DD1C(void *arg0, void *arg1, u32 arg2) {
    S_0880DD1C *s;
    C_0880DD1C *p;

    func_0880D9B0(arg1);
    if (arg2 >= func_0880C7A8(arg0)) {
        try {
            func_0880DE18(arg0, arg2 + 1);
        } catch (...) {
            p = func_0880DCF4(arg1);
            if (p != NULL) {
                p->v08(1);
            }
            throw;
        }
    }
    s = func_0880C758(arg0, arg2);
    if (s->unk_00 != NULL) {
        p = func_0880DCF4(s->unk_00);
        if (p != NULL) {
            p->v08(1);
        }
    }
    s->unk_00 = arg1;
}

}
