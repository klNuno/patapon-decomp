#include "common.h"

extern "C" {

typedef struct {
    char unk_00[0x40];
    s32 unk_40;
    char unk_44[0x20];
} E089B2890;

class C089B2890 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual s32 v1C(char *);
};

struct V089B2890 {
    E089B2890 *unk_00;
    E089B2890 &at(u32 j) { return *(E089B2890 *)((u8 *)unk_00 + j); }
};

typedef struct {
    u8 pad_00[0x1910];
    V089B2890 unk_1910;
    u8 pad_1914[4];
    C089B2890 *unk_1918;
} T089B2890;

extern E089B2890 D_089F0AC0[];

u32 func_08822BC4(char *);
void func_0881F120(void *, void *, s32);

void func_089B2890(T089B2890 *arg0, C089B2890 *arg1) {
    u32 i;
    E089B2890 *s;
    V089B2890 *v;
    u32 j;

    arg0->unk_1918 = arg1;
    for (i = 0, s = D_089F0AC0, j = 0, v = &arg0->unk_1910; i < 43; i++, s++, j += sizeof(E089B2890)) {
        if (func_08822BC4(s->unk_00) != 0) {
            v->at(j).unk_40 = arg0->unk_1918->v1C(s->unk_00);
        } else {
            v->at(j).unk_40 = -1;
        }
        func_0881F120(v->at(j).unk_44, s->unk_44, 0x20);
    }
}

}
