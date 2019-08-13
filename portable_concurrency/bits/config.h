#pragma once

#if defined(_MSC_VER)
#define PC_NODISCARD _Check_return_
#elif defined(__has_cpp_attribute)
#if __has_cpp_attribute(gnu::warn_unused_result)
#define PC_NODISCARD [[gnu::warn_unused_result]]
#endif
#endif

#if !defined(PC_NODISCARD)
#define PC_NODISCARD
#endif
