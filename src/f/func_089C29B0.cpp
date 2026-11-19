#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00[16];
} Mtx;

class U {
public:
    u8 pad_00[0x80];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

typedef struct {
    u8 pad_00[0x290];
    U unk_290;
} T;

extern s32 D_08A0916C[];
extern s32 func_08985828(s32, s32);
void func_08866464(Mtx *, void *, void *);
extern int func_08864E80(char *, char *);

void func_089C29B0(T *arg0) {
    Mtx temp;

    func_08866464(&temp, (void *)func_08985828((s32)arg0, 1), (void *)D_08A0916C[0]);
    func_08864E80((char *)&arg0->unk_290, (char *)&temp);
    arg0->unk_290.unk_10();
}

}
