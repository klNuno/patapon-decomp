#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_0880DB94;

class C_0880DB94 {
public:
    virtual void v08(s32);
};

typedef struct {
    void *unk_00;
} S_0880DB94;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[4];
} O_0880DB94;

s32 func_0880D874(void);
void func_0880D944(P_0880DB94 *, s32);
void func_0880D9C0(P_0880DB94 *, s32);
u32 func_0880C7A8(O_0880DB94 *);
S_0880DB94 *func_0880C758(O_0880DB94 *, u32);
C_0880DB94 *func_0880DCF4(void *);
void func_08810258(void *, s32);
void func_0880D8A4(O_0880DB94 *, s32);
void func_0880416C(O_0880DB94 *);

O_0880DB94 *func_0880DB94(O_0880DB94 *arg0, s16 arg1) throw() {
    P_0880DB94 lock;
    u32 n;
    u32 i;
    S_0880DB94 *s;
    C_0880DB94 *p;

    if (arg0 != NULL) {
        func_0880D9C0(&lock, func_0880D874());
        n = func_0880C7A8(arg0);
        for (i = 0; i < n; i++) {
            s = func_0880C758(arg0, i);
            if (s->unk_00 != NULL) {
                p = func_0880DCF4(s->unk_00);
                if (p != NULL) {
                    p->v08(1);
                }
            }
        }
        func_0880D944(&lock, -1);
        func_08810258(arg0->unk_0C, -1);
        func_0880D8A4(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
