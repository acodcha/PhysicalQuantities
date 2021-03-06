// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of Physical Quantities (PhQ), a C++17 header-only library of physical quantities, physical models, and units of measure for scientific computation.
// Physical Quantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Physical Quantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with Physical Quantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Mass.hpp"
#include "IsochoricHeatCapacity.hpp"
#include "Unit/SpecificHeatCapacity.hpp"

namespace PhQ {

class SpecificIsochoricHeatCapacity : public DimensionalScalarQuantity<Unit::SpecificHeatCapacity> {

public:

  constexpr SpecificIsochoricHeatCapacity() noexcept : DimensionalScalarQuantity<Unit::SpecificHeatCapacity>() {}

  constexpr SpecificIsochoricHeatCapacity(double value, Unit::SpecificHeatCapacity unit) noexcept : DimensionalScalarQuantity<Unit::SpecificHeatCapacity>(value, unit) {}

  constexpr SpecificIsochoricHeatCapacity(const SpecificGasConstant& specific_gas_constant, const SpecificIsobaricHeatCapacity& specific_isobaric_heat_capacity) noexcept;

  constexpr SpecificIsochoricHeatCapacity(const SpecificGasConstant& specific_gas_constant, const SpecificHeatRatio& specific_heat_ratio) noexcept;

  constexpr SpecificIsochoricHeatCapacity(const SpecificIsobaricHeatCapacity& specific_isobaric_heat_capacity, const SpecificHeatRatio& specific_heat_ratio) noexcept;

  constexpr SpecificIsochoricHeatCapacity(const IsochoricHeatCapacity& isochoric_heat_capacity, const Mass& mass) noexcept : SpecificIsochoricHeatCapacity(isochoric_heat_capacity.value() / mass.value()) {}

  constexpr bool operator==(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
    return value_ == specific_isochoric_heat_capacity.value_;
  }

  constexpr bool operator!=(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
    return value_ != specific_isochoric_heat_capacity.value_;
  }

  constexpr bool operator<(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
    return value_ < specific_isochoric_heat_capacity.value_;
  }

  constexpr bool operator<=(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
    return value_ <= specific_isochoric_heat_capacity.value_;
  }

  constexpr bool operator>(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
    return value_ > specific_isochoric_heat_capacity.value_;
  }

  constexpr bool operator>=(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
    return value_ >= specific_isochoric_heat_capacity.value_;
  }

  constexpr SpecificIsochoricHeatCapacity operator+(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
    return {value_ + specific_isochoric_heat_capacity.value_};
  }

  constexpr SpecificIsobaricHeatCapacity operator+(const SpecificGasConstant& specific_gas_constant) const noexcept;

  constexpr void operator+=(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) noexcept {
    value_ += specific_isochoric_heat_capacity.value_;
  }

  constexpr SpecificIsochoricHeatCapacity operator-(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
    return {value_ - specific_isochoric_heat_capacity.value_};
  }

  constexpr void operator-=(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) noexcept {
    value_ -= specific_isochoric_heat_capacity.value_;
  }

  constexpr IsochoricHeatCapacity operator*(const Mass& mass) const noexcept {
    return {*this, mass};
  }

  constexpr SpecificIsobaricHeatCapacity operator*(const SpecificHeatRatio& specific_heat_ratio) const noexcept;

protected:

  constexpr SpecificIsochoricHeatCapacity(double value) noexcept : DimensionalScalarQuantity<Unit::SpecificHeatCapacity>(value) {}

};

template <> constexpr bool sort(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity_1, const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity_2) noexcept {
  return sort(specific_isochoric_heat_capacity_1.value(), specific_isochoric_heat_capacity_2.value());
}

constexpr Mass::Mass(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity, const IsochoricHeatCapacity& isochoric_heat_capacity) noexcept : Mass(isochoric_heat_capacity.value() / specific_isochoric_heat_capacity.value()) {}

constexpr IsochoricHeatCapacity::IsochoricHeatCapacity(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity, const Mass& mass) noexcept : IsochoricHeatCapacity(specific_isochoric_heat_capacity.value() * mass.value()) {}

constexpr IsochoricHeatCapacity Mass::operator*(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
  return {specific_isochoric_heat_capacity, *this};
}

constexpr SpecificIsochoricHeatCapacity IsochoricHeatCapacity::operator/(const Mass& mass) const noexcept {
  return {*this, mass};
}

constexpr Mass IsochoricHeatCapacity::operator/(const SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const noexcept {
  return {specific_isochoric_heat_capacity, *this};
}

} // namespace PhQ

namespace std {

template <> struct hash<PhQ::SpecificIsochoricHeatCapacity> {
  size_t operator()(const PhQ::SpecificIsochoricHeatCapacity& specific_isochoric_heat_capacity) const {
    return hash<double>()(specific_isochoric_heat_capacity.value());
  }
};

} // namespace std
