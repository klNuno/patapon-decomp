#include "common.h"

extern "C" {

extern char D_08A0098C[];
extern char D_089E5BF0[];

class C0891AAAC {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32, char *, u16 *, f32, f32);
    virtual void v18(s32);
};

void func_088226BC(char *, char *, ...);
s32 func_088B3120(u16 *, s32, char *);
void func_08826830(u16 *, u16 *);

void func_0891AAAC(void *arg0, C0891AAAC *arg1, u16 *arg2, f32 *arg3, s32 arg4) {
    char s[0x200];
    u16 w[0x100];

    func_088226BC(s, D_08A0098C, arg4);
    func_088B3120(w, 0x100, s);
    func_08826830(w, arg2);
    arg1->v14(0, D_089E5BF0, w, arg3[0], arg3[1]);
    arg1->v18(0xA0);
}

}
