/*
 * Copyright (C) 2015 The Android Open Source Project
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

#ifndef SIMPLE_PERF_DWARF_UNWIND_H_
#define SIMPLE_PERF_DWARF_UNWIND_H_

#include <vector>

#include "perf_regs.h"

namespace simpleperf {
struct ThreadEntry;
}

using ThreadEntry = simpleperf::ThreadEntry;

std::vector<uint64_t> UnwindCallChain(ArchType arch, const ThreadEntry& thread, const RegSet& regs,
                                      const std::vector<char>& stack, bool strict_arch_check);

#endif  // SIMPLE_PERF_DWARF_UNWIND_H_
