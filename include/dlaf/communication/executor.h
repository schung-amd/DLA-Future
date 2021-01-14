//
// Distributed Linear Algebra with Future (DLAF)
//
// Copyright (c) 2018-2021, ETH Zurich
// All rights reserved.
//
// Please, refer to the LICENSE file in the root directory.
// SPDX-License-Identifier: BSD-3-Clause
//
#pragma once

/// @file

#include <hpx/include/parallel_executors.hpp>
#include <hpx/include/threads.hpp>

namespace dlaf {
namespace comm {
namespace internal {

// Temporary workaround until HPX v1.5 which exposes a proper API
inline bool mpi_pool_exists() {
  using hpx::threads::executors::pool_executor;
  try {
    pool_executor("mpi");
    return true;
  }
  catch (...) {
    return false;
  }
}

}
}
}
