/*
 * Copyright (c) 2017-2024 The Khronos Group Inc.
 * Copyright (c) 2017-2024 Valve Corporation
 * Copyright (c) 2017-2024 LunarG, Inc.
 * Copyright (c) 2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
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
 *
 * Author: Charles Giessen <charles@lunarg.com>
 */

#include <stddef.h>
#include "loader_common.h"
#include "log.h"

#if VK_USE_64_BIT_PTR_DEFINES == 1
#define INT_TYPE uint64_t
#else
#define INT_TYPE uint32_t
#endif

const INT_TYPE VULKAN_LOADER_ERROR_BIT_VALUE = VULKAN_LOADER_ERROR_BIT;
const INT_TYPE FUNCTION_OFFSET_INSTANCE = offsetof(struct loader_instance, phys_dev_ext_disp_functions);
const INT_TYPE PHYS_DEV_OFFSET_INST_DISPATCH = offsetof(struct loader_instance_dispatch_table, phys_dev_ext);
const INT_TYPE PHYS_DEV_OFFSET_PHYS_DEV_TRAMP = offsetof(struct loader_physical_device_tramp, phys_dev);
const INT_TYPE ICD_TERM_OFFSET_PHYS_DEV_TERM = offsetof(struct loader_physical_device_term, this_icd_term);
const INT_TYPE PHYS_DEV_OFFSET_PHYS_DEV_TERM = offsetof(struct loader_physical_device_term, phys_dev);
const INT_TYPE INSTANCE_OFFSET_ICD_TERM = offsetof(struct loader_icd_term, this_instance);
const INT_TYPE DISPATCH_OFFSET_ICD_TERM = offsetof(struct loader_icd_term, phys_dev_ext);
const INT_TYPE EXT_OFFSET_DEVICE_DISPATCH = offsetof(struct loader_dev_dispatch_table, ext_dispatch);
