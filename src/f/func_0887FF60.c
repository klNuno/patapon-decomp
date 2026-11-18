typedef int s32;

extern s32 func_088A1D0C(void *, void *);
extern s32 func_088A3888(void *, s32, void *);

void func_0887FF60(char *arg0) {
    func_088A3888((arg0 + 0xE60), *(s32 *)(arg0 + 4), (arg0 + 8));
    func_088A1D0C((arg0 + 0xDA0), (arg0 + 0xE60));
}
