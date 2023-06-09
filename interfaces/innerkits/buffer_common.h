/*
 * Copyright (c) 2020-2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GRAPHIC_LITE_BUFFER_COMMON_H
#define GRAPHIC_LITE_BUFFER_COMMON_H

#include "gfx_utils/graphic_log.h"

namespace OHOS {
#define RETURN_VAL_IF_FAIL(cond, val) { \
    if (!(cond)) {                      \
        GRAPHIC_LOGD("'%s' failed.", #cond);    \
        return val;                     \
    }                                   \
}

#define RETURN_IF_FAIL(cond) {          \
    if (!(cond)) {                      \
        GRAPHIC_LOGD("'%s' failed.", #cond);    \
        return;                         \
    }                                   \
}

enum BufferErrorCode {
    SURFACE_ERROR_INVALID_PARAM = -10,
    SURFACE_ERROR_INVALID_REQUEST,
    SURFACE_ERROR_NOT_READY,
    SURFACE_ERROR_SYSTEM_ERROR,
    SURFACE_ERROR_BUFFER_NOT_EXISTED,
    SURFACE_ERROR_OK = 0,
};
} // end namespace
#endif
