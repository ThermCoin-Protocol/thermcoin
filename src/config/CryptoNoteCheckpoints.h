// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
// Copyright (c) 2023, Promethius Consortium
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {
        // {0, "7fb97df81221dd1366051b2d0bc7f49c66c22ac4431d879c895b06d66ef66f4c"},
        // {1, "7fb97df81221dd1366051b2d0bc7f49c66c22ac4431d879c895b06d66ef66f4c"}
    };
} // namespace CryptoNote
