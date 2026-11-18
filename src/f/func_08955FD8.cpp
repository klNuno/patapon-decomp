#include "common.h"
extern "C" {
class C0 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30(f32);
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual s32 unk_50();
};
struct C1 : C0 {
    u8 pad_04[0xC];
    f32 unk_10;
};
typedef struct {
    u8 pad_00[0x10];
    C1 *unk_10;
} N;
struct It {
    N *unk_00;
    It(const It &o) : unk_00(o.unk_00) {}
};
struct CIt {
    N *unk_00;
    CIt(const It &i) : unk_00(i.unk_00) {}
};
typedef struct {
    u8 pad_00[0x34];
    s32 unk_34;
    u32 unk_38;
} S_08955DEC_B;
typedef struct {
    u8 pad_00[0xAA4];
    u8 *unk_AA4;
    u8 pad_AA8[0x48];
    char unk_AF0[0x1260];
    char unk_1D50[0x25C4];
    u32 unk_4314;
    u8 pad_4318[0xA8];
    char unk_43C0[0x1DCA0];
    u8 unk_22060[0x124];
    s32 unk_22184;
    u32 unk_22188;
} S;
s32 func_0888AA98(void *);
S_08955DEC_B *func_0888AAA0(void *);
u32 func_0888AAB8(void *);
s32 func_0894BDF4(void *);
s32 func_0894BDFC(char *);
void func_0894DAC8(void *, u32);
void func_0894DAD0(char *, s32);
s32 func_08952574(char *);
void func_08953630(void *, u32, s32);
void func_089536C4(void *, u32, s32);
extern void func_0895395C(char *);
void func_089579E8(s32, s32, s32, f32);
It func_0897C818(void *, s32);

static inline N *func_08955FD8_unk_00(u8 *arg0) { return (N *)(arg0 + 0x9C); }
static inline bool func_08955FD8_unk_04(N *arg0, CIt arg1) { return arg1.unk_00 != arg0; }
static inline const u32 &func_08955FD8_unk_08(const u32 &arg0, const u32 &arg1) { return (arg0 < arg1) ? arg1 : arg0; }

void func_08955FD8(S *arg0, void *arg1)
{
    if (func_0888AAA0(arg1) != NULL && func_0888AAA0(arg1)->unk_34 == 6 &&
        func_0894BDFC((char *)func_08952574(arg0->unk_1D50)) == 2) {
        func_089579E8((s32)arg0, 0, 1, 2.0f);
        func_0895395C(arg0->unk_AF0);
        return;
    }
    if (func_0888AA98(arg1) & 1) {
        func_0894DAC8(arg0->unk_43C0, func_0888AAB8(arg1));
        if (func_0888AAA0(arg1) == NULL) {
            It it = func_0897C818(arg0->unk_AA4, 1);
            if (func_08955FD8_unk_04(func_08955FD8_unk_00(arg0->unk_AA4), CIt(it))) {
                if (it.unk_00->unk_10->unk_50())
                    arg0->unk_22184 = 1;
            }
        }
    } else if (func_0888AAA0(arg1) != NULL && !(func_0888AAA0(arg1)->unk_38 & 2)) {
        if (arg0->unk_4314 > 1U) {
            if (func_0894BDF4(arg0->unk_22060) == 2)
                func_08953630(arg0->unk_AF0, arg0->unk_4314, 1);
            else
                func_089536C4(arg0->unk_AF0, arg0->unk_4314, 0);
        }
        arg0->unk_22188 = func_08955FD8_unk_08(arg0->unk_22188, (u32)arg0->unk_4314);
        It it = func_0897C818(arg0->unk_AA4, 1);
        if (func_08955FD8_unk_04(func_08955FD8_unk_00(arg0->unk_AA4), CIt(it))) {
            C1 *obj = it.unk_00->unk_10;
            if (obj->unk_10 > 0.0f)
                obj->unk_30(0.5f);
        }
        arg0->unk_22184 = 4;
    }
    if (func_0888AAA0(arg1) == NULL)
        func_0895395C(arg0->unk_AF0);
    func_0894DAD0(arg0->unk_43C0, func_0888AAA0(arg1) != NULL);
}
}
