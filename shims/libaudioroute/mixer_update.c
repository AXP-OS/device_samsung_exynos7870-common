#define LOG_TAG "mixer_update_shim"
#define LOG_NDEBUG 0

#include <cutils/log.h>

void mixer_update() {
    ALOGW("SHIM: hijacking %s!", __func__);
}
