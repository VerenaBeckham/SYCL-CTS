/*******************************************************************************
//
//  SYCL 2020 Conformance Test Suite
//
//  Copyright (c) 2023 The Khronos Group Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
*******************************************************************************/

#include "multi_ptr_subscript_op_common.h"

namespace multi_ptr_subscript_op_core {

TEST_CASE("multi_ptr operator[](std::ptrdiff_t)", "[multi_ptr]") {
  auto types = multi_ptr_common::get_types();
  auto composite_types = multi_ptr_common::get_composite_types();

  for_all_types<multi_ptr_subscript_op::check_multi_ptr_subscript_op>(types);
  for_all_types<multi_ptr_subscript_op::check_multi_ptr_subscript_op>(
      composite_types);
}

}  // namespace multi_ptr_subscript_op_core
