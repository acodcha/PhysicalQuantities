// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of Physical Quantities (PhQ), a C++17 header-only library of physical quantities, physical models, and units of measure for scientific computation.
// Physical Quantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Physical Quantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with Physical Quantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Base.hpp"

namespace PhQ {

namespace Dimension {

class Temperature : public Base {

public:

  constexpr Temperature(int_least8_t value = 0) noexcept : Base(value) {}

  std::string abbreviation() const noexcept {
    return "Θ";
  }

  std::string label() const noexcept {
    return "temperature";
  }

};

} // namespace Dimension

template <> constexpr bool sort(const Dimension::Temperature& temperature_1, const Dimension::Temperature& temperature_2) noexcept {
  return temperature_1 < temperature_2;
}

} // namespace PhQ

namespace std {

template <> struct hash<PhQ::Dimension::Temperature> {
  size_t operator()(const PhQ::Dimension::Temperature& temperature) const {
    return hash<double>()(temperature.value());
  }
};

} // namespace std
