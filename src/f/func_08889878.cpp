#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
} P_08889878;

class O_08889878 {
public:
    u8 pad_00[0x16C];
    virtual void v00();
    virtual void v01();
    virtual P_08889878 *v02();
};

struct V {
    f32 unk_00;
    f32 unk_04;
    V(f32 x, f32 y) { unk_00 = x; unk_04 = y; }
};

struct V1 : V {
    u8 pad_08[8];
    V1(f32 x, f32 y) : V(x, y) {}
};

struct W {
    s32 unk_00;
    s32 unk_04;
    W() { unk_00 = 0; unk_04 = 0; }
};

typedef struct {
    u8 pad_00[0x660];
    s32 unk_660;
} S_08889878;

s32 func_0888A924(s32);
s32 func_0892A498(s32, s32, V *, W *, s32, s32, f32);
template<class T> inline void func_1(f32 a, s32 b, s32 c, const T &d, const W &e, s32 f, s32 g) {
    func_0892A498(b, c, (V *)&d, (W *)&e, f, g, a);
}

void func_08889878(S_08889878 *arg0, O_08889878 *arg1) {
    func_1(0.0f, func_0888A924(arg0->unk_660), 0x8D, V1(arg1->v02()->unk_30, arg1->v02()->unk_34), W(), 0, 0);
    func_1(0.0f, func_0888A924(arg0->unk_660), 0x8D, V(arg1->v02()->unk_30, arg1->v02()->unk_34), W(), 1, 0);
}

}
