// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "winml_adapter_execution_provider.h"

#include "core/session/winml_adapter_c_api.h"
#include "core/session/ort_apis.h"
#include "core/session/winml_adapter_apis.h"
#include "error_code_helper.h"

namespace winmla = Windows::AI::MachineLearning::Adapter;

ORT_API(void, winmla::ReleaseExecutionProvider, OrtExecutionProvider* ptr) {
  delete ptr;
}