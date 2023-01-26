//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: trade.fbe
// FBE version: 1.14.2.0
//------------------------------------------------------------------------------

#pragma once

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"

namespace trade {
using namespace FBE;
} // namespace trade

namespace FBE {
using namespace ::trade;
} // namespace FBE

namespace trade {

enum class OrderSide : uint8_t
{
    buy,
    sell,
};

std::ostream& operator<<(std::ostream& stream, OrderSide value);

#if defined(FMT_VERSION) && (FMT_VERSION >= 90000)
} template <> struct fmt::formatter<trade::OrderSide> : ostream_formatter {}; namespace trade {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, OrderSide value);
#endif

enum class OrderType : uint8_t
{
    market,
    limit,
    stop,
};

std::ostream& operator<<(std::ostream& stream, OrderType value);

#if defined(FMT_VERSION) && (FMT_VERSION >= 90000)
} template <> struct fmt::formatter<trade::OrderType> : ostream_formatter {}; namespace trade {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, OrderType value);
#endif

struct Order
{
    int32_t id;
    std::string symbol;
    ::trade::OrderSide side;
    ::trade::OrderType type;
    double price;
    double volume;

    size_t fbe_type() const noexcept { return 1; }

    Order();
    Order(int32_t arg_id, const std::string& arg_symbol, const ::trade::OrderSide& arg_side, const ::trade::OrderType& arg_type, double arg_price, double arg_volume);
    Order(const Order& other) = default;
    Order(Order&& other) = default;
    ~Order() = default;

    Order& operator=(const Order& other) = default;
    Order& operator=(Order&& other) = default;

    bool operator==(const Order& other) const noexcept;
    bool operator!=(const Order& other) const noexcept { return !operator==(other); }
    bool operator<(const Order& other) const noexcept;
    bool operator<=(const Order& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Order& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Order& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const Order& value);

    void swap(Order& other) noexcept;
    friend void swap(Order& value1, Order& value2) noexcept { value1.swap(value2); }
};

} // namespace trade

#if defined(FMT_VERSION) && (FMT_VERSION >= 90000)
template <> struct fmt::formatter<trade::Order> : ostream_formatter {};
#endif

template<>
struct std::hash<trade::Order>
{
    typedef trade::Order argument_type;
    typedef size_t result_type;

    result_type operator() (const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

namespace trade {

struct Balance
{
    std::string currency;
    double amount;

    size_t fbe_type() const noexcept { return 2; }

    Balance();
    Balance(const std::string& arg_currency, double arg_amount);
    Balance(const Balance& other) = default;
    Balance(Balance&& other) = default;
    ~Balance() = default;

    Balance& operator=(const Balance& other) = default;
    Balance& operator=(Balance&& other) = default;

    bool operator==(const Balance& other) const noexcept;
    bool operator!=(const Balance& other) const noexcept { return !operator==(other); }
    bool operator<(const Balance& other) const noexcept;
    bool operator<=(const Balance& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Balance& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Balance& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const Balance& value);

    void swap(Balance& other) noexcept;
    friend void swap(Balance& value1, Balance& value2) noexcept { value1.swap(value2); }
};

} // namespace trade

#if defined(FMT_VERSION) && (FMT_VERSION >= 90000)
template <> struct fmt::formatter<trade::Balance> : ostream_formatter {};
#endif

template<>
struct std::hash<trade::Balance>
{
    typedef trade::Balance argument_type;
    typedef size_t result_type;

    result_type operator() (const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.currency)>()(value.currency);
        return result;
    }
};

namespace trade {

struct Account
{
    int32_t id;
    std::string name;
    ::trade::Balance wallet;
    std::vector<::trade::Order> orders;

    size_t fbe_type() const noexcept { return 3; }

    Account();
    Account(int32_t arg_id, const std::string& arg_name, const ::trade::Balance& arg_wallet, const std::vector<::trade::Order>& arg_orders);
    Account(const Account& other) = default;
    Account(Account&& other) = default;
    ~Account() = default;

    Account& operator=(const Account& other) = default;
    Account& operator=(Account&& other) = default;

    bool operator==(const Account& other) const noexcept;
    bool operator!=(const Account& other) const noexcept { return !operator==(other); }
    bool operator<(const Account& other) const noexcept;
    bool operator<=(const Account& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Account& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Account& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const Account& value);

    void swap(Account& other) noexcept;
    friend void swap(Account& value1, Account& value2) noexcept { value1.swap(value2); }
};

} // namespace trade

#if defined(FMT_VERSION) && (FMT_VERSION >= 90000)
template <> struct fmt::formatter<trade::Account> : ostream_formatter {};
#endif

template<>
struct std::hash<trade::Account>
{
    typedef trade::Account argument_type;
    typedef size_t result_type;

    result_type operator() (const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

namespace trade {

} // namespace trade
