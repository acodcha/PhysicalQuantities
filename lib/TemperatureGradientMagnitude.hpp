// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of PhysicalQuantities, a C++17 library of physical quantities, units of measure, and related concepts for scientific computation.
// PhysicalQuantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// PhysicalQuantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with PhysicalQuantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Length.hpp"
#include "Temperature.hpp"
#include "Unit/TemperatureGradient.hpp"

namespace PhQ {

// Forward declaration.
class Direction;
class TemperatureGradient;

class TemperatureGradientMagnitude : public DimensionalScalarQuantity<Unit::TemperatureGradient> {

public:

  constexpr TemperatureGradientMagnitude() noexcept : DimensionalScalarQuantity<Unit::TemperatureGradient>() {}

  constexpr TemperatureGradientMagnitude(double value, Unit::TemperatureGradient unit) noexcept : DimensionalScalarQuantity<Unit::TemperatureGradient>(value, unit) {}

  constexpr TemperatureGradientMagnitude(const TemperatureGradient& temperature_gradient) noexcept;

  TemperatureGradientMagnitude(const TemperatureDifference& temperature_difference, const Length& length) : DimensionalScalarQuantity<Unit::TemperatureGradient>(temperature_difference / length) {}

  constexpr bool operator==(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
    return value_ == temperature_gradient_magnitude.value_;
  }

  constexpr bool operator!=(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
    return value_ != temperature_gradient_magnitude.value_;
  }

  constexpr bool operator<(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
    return value_ < temperature_gradient_magnitude.value_;
  }

  constexpr bool operator<=(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
    return value_ <= temperature_gradient_magnitude.value_;
  }

  constexpr bool operator>(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
    return value_ > temperature_gradient_magnitude.value_;
  }

  constexpr bool operator>=(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
    return value_ >= temperature_gradient_magnitude.value_;
  }

  constexpr TemperatureGradientMagnitude operator+(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
    return {value_ + temperature_gradient_magnitude.value_};
  }

  constexpr void operator+=(const TemperatureGradientMagnitude& temperature_gradient_magnitude) noexcept {
    value_ += temperature_gradient_magnitude.value_;
  }

  constexpr TemperatureGradientMagnitude operator-(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
    return {value_ - temperature_gradient_magnitude.value_};
  }

  constexpr void operator-=(const TemperatureGradientMagnitude& temperature_gradient_magnitude) noexcept {
    value_ -= temperature_gradient_magnitude.value_;
  }

  constexpr TemperatureDifference operator*(const Length& length) const noexcept {
    return {value_ * length.value()};
  }

  constexpr TemperatureGradient operator*(const Direction& direction) const noexcept;

protected:

  constexpr TemperatureGradientMagnitude(double value) noexcept : DimensionalScalarQuantity<Unit::TemperatureGradient>(value) {}

  friend class Direction;
  friend class TemperatureDifference;
  friend class TemperatureGradient;

};

template <> constexpr bool sort(const TemperatureGradientMagnitude& temperature_gradient_magnitude_1, const TemperatureGradientMagnitude& temperature_gradient_magnitude_2) noexcept {
  return temperature_gradient_magnitude_1.value() < temperature_gradient_magnitude_2.value();
}

TemperatureGradientMagnitude TemperatureDifference::operator/(const Length& length) const {
  if (length.value() != 0.0) {
    return {value_ / length.value()};
  } else {
    throw std::runtime_error{"Division of " + print() + " by " + length.print() + "."};
  }
}

} // namespace PhQ
