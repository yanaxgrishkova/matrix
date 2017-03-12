#include "matrix.hpp"

matrix_t::matrix_t() noexcept : rows_{0}, columns_{0}, elements_{nullptr}
{
}

auto matrix_t::rows() -> unsigned int
{
    return rows_;
}

auto matrix_t::columns() -> unsigned int
{
    return columns_;
}
