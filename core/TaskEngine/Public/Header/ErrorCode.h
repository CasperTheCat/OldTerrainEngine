#pragma once
#include <cstdint>

enum class ETaskErrorCodes : uint32_t
{
    HostNotFound,
    HostKeyFailure,

    TOTAL_ERROR_CODES
};