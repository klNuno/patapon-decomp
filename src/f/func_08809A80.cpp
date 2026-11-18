#include "common.h"

extern "C" {

class Buf_08809A80 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
    u8 pad_04[0x20];
    u32 unk_24;
    char *unk_28;
    u8 pad_2C[0x10];
    s32 unk_3C;
    u8 pad_40[0xA];
    u8 unk_4A;
    u8 unk_4B;
    void h();
};

extern u32 D_089F5FF0[];
void func_08804150(char *);
char *func_088041FC(u32);
u32 *func_08809C20(u32 *, u32 *);
extern s32 func_0880BF94(s32);
void func_08809BB4(Buf_08809A80 *);

inline void Buf_08809A80::h() {
    if (unk_4A) {
        func_0880BF94((s32)this);
    } else {
        func_08809BB4(this);
    }
}

Buf_08809A80 *func_08809A80(Buf_08809A80 *arg0, char *arg1, s32 arg2) {
    u32 a;
    u32 b;
    u32 n;

    if (arg0->unk_1C() < 0) {
        return NULL;
    }
    if (arg1 == NULL) {
        if (arg0->unk_4B) {
            func_08804150(arg0->unk_28);
        }
        arg0->unk_28 = NULL;
        b = arg2;
        a = arg0->unk_3C * 2;
        n = *func_08809C20(func_08809C20(&a, &b), D_089F5FF0);
        arg0->unk_24 = n;
        arg0->unk_28 = func_088041FC(n);
        arg0->unk_4B = 1;
        arg0->unk_4A = arg2 != 0;
        arg0->h();
    } else {
        if (arg2 < arg0->unk_3C * 2) {
            return NULL;
        }
        if (arg0->unk_4B) {
            func_08804150(arg0->unk_28);
        }
        arg0->unk_28 = arg1;
        arg0->unk_24 = arg2;
        arg0->unk_4B = 0;
        arg0->unk_4A = 1;
        func_0880BF94((s32)arg0);
    }
    return arg0;
}

}
