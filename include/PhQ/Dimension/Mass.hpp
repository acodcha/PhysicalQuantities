// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of Physical Quantities (PhQ), a C++17 header-only library of physical quantities, physical models, and units of measure for scientific computation.
// Physical Quantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Physical Quantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with Physical Quantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Base.hpp"

namespace PhQ {

namespace Dimension {

class Mass : public Base {

public:

  constexpr Mass(int_least8_t value = 0) noexcept : Base(value) {}

  std::string abbreviation() const noexcept {
    return "M";
  }

  std::string label() const noexcept {
    return "mass";
  }

};

} // namespace Dimension

template <> constexpr bool sort(const Dimension::Mass& mass_1, const Dimension::Mass& mass_2) noexcept {
  return mass_1 < mass_2;
}

} // namespace PhQ

namespace std {

template <> struct hash<PhQ::Dimension::Mass> {
  size_t operator()(const PhQ::Dimension::Mass& mass) const {
    return hash<double>()(mass.value());
  }
};

} // namespace std
