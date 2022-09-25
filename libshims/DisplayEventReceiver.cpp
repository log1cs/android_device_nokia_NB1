/*
 * Copyright (C) 2020 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdint.h>
#include <gui/ISurfaceComposer.h>

namespace android {
    extern "C" void _ZN7android20DisplayEventReceiverC2ENS_16ISurfaceComposer11VsyncSourceENS_3ftl5FlagsINS1_17EventRegistrationEEE(void* vsyncSource, ISurfaceComposer::EventRegistrationFlags eventRegistration);

    extern "C" void _ZN7android20DisplayEventReceiverC1ENS_16ISurfaceComposer11VsyncSourceE(void *vsyncSource) {
                    ISurfaceComposer::EventRegistrationFlags eventRegistration = {};
                    _ZN7android20DisplayEventReceiverC2ENS_16ISurfaceComposer11VsyncSourceENS_3ftl5FlagsINS1_17EventRegistrationEEE(vsyncSource, eventRegistration);
    }
}
