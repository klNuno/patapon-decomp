#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x88];
    s32 unk_88;
} T;

void func_08920A60(T *);

void func_08920A20(T *arg0) {
    switch (arg0->unk_88) {
    case 0:
        func_08920A60(arg0);
        return;
    }
    func_08920A60(arg0);
}

}
