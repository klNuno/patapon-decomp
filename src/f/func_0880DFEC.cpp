#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_0880DFEC;

void *func_08804338(u32);
void func_08804690(void *, void (*)(void), u8 *);
void func_088067A8(P_0880DFEC *, s32);
s32 func_0880D874(void);
void func_0880D944(P_0880DFEC *, s32);
void func_0880D9C0(P_0880DFEC *, s32);
void func_0880E0D4(P_0880DFEC *, P_0880DFEC *);
void func_0880E0FC(void *, char *);
void func_0880F4EC(P_0880DFEC *, void *);
void func_0880644C(void);
extern char D_089F60A4[];
extern s8 D_08A4963C[];
extern u8 D_08A49640[];
extern P_0880DFEC D_08A4964C[];

P_0880DFEC *func_0880DFEC(void) throw() {
    P_0880DFEC lock;
    P_0880DFEC tmp;
    void *p;
    P_0880DFEC *r;

    func_0880D9C0(&lock, func_0880D874());
    if (D_08A4963C[0] == 0) {
        if ((p = func_08804338(0x18)) != NULL) {
            func_0880E0FC(p, D_089F60A4);
        }
        func_0880F4EC(&tmp, p);
        func_0880E0D4(D_08A4964C, &tmp);
        func_088067A8(&tmp, -1);
        func_08804690(D_08A4964C, func_0880644C, D_08A49640);
        D_08A4963C[0] = 1;
    }
    r = D_08A4964C;
    func_0880D944(&lock, -1);
    return r;
}

}
