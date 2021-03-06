// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of Physical Quantities (PhQ), a C++17 header-only library of physical quantities, physical models, and units of measure for scientific computation.
// Physical Quantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Physical Quantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with Physical Quantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Quantity/DimensionalScalar.hpp"
#include "Unit/Memory.hpp"

namespace PhQ {

// Forward declaration.
class Duration;
class Frequency;
class MemoryRate;

class Memory : public DimensionalScalarQuantity<Unit::Memory> {

public:

  constexpr Memory() noexcept : DimensionalScalarQuantity<Unit::Memory>() {}

  constexpr Memory(double value, Unit::Memory unit) noexcept : DimensionalScalarQuantity<Unit::Memory>(value, unit) {}

  constexpr Memory(const MemoryRate& memory_rate, const Duration& duration) noexcept;

  constexpr Memory(const MemoryRate& memory_rate, const Frequency& frequency) noexcept;

  constexpr bool operator==(const Memory& memory) const noexcept {
    return value_ == memory.value_;
  }

  constexpr bool operator!=(const Memory& memory) const noexcept {
    return value_ != memory.value_;
  }

  constexpr bool operator<(const Memory& memory) const noexcept {
    return value_ < memory.value_;
  }

  constexpr bool operator<=(const Memory& memory) const noexcept {
    return value_ <= memory.value_;
  }

  constexpr bool operator>(const Memory& memory) const noexcept {
    return value_ > memory.value_;
  }

  constexpr bool operator>=(const Memory& memory) const noexcept {
    return value_ >= memory.value_;
  }

  constexpr Memory operator+(const Memory& memory) const noexcept {
    return {value_ + memory.value_};
  }

  constexpr void operator+=(const Memory& memory) noexcept {
    value_ += memory.value_;
  }

  constexpr Memory operator-(const Memory& memory) const noexcept {
    return {value_ - memory.value_};
  }

  constexpr void operator-=(const Memory& memory) noexcept {
    value_ -= memory.value_;
  }

  constexpr MemoryRate operator*(const Frequency& frequency) const noexcept;

  constexpr MemoryRate operator/(const Duration& duration) const noexcept;

  constexpr Duration operator/(const MemoryRate& memory_rate) const noexcept;

protected:

  constexpr Memory(double value) noexcept : DimensionalScalarQuantity<Unit::Memory>(value) {}

};

template <> constexpr bool sort(const Memory& memory_1, const Memory& memory_2) noexcept {
  return sort(memory_1.value(), memory_2.value());
}

} // namespace PhQ

namespace std {

template <> struct hash<PhQ::Memory> {
  size_t operator()(const PhQ::Memory& memory) const {
    return hash<double>()(memory.value());
  }
};

} // namespace std
