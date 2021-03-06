// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of Physical Quantities (PhQ), a C++17 header-only library of physical quantities, physical models, and units of measure for scientific computation.
// Physical Quantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Physical Quantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with Physical Quantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Length.hpp"
#include "Temperature.hpp"
#include "Unit/TemperatureGradient.hpp"

namespace PhQ {

// Forward declarations.
class Direction;
class TemperatureGradient;

class TemperatureGradientMagnitude : public DimensionalScalarQuantity<Unit::TemperatureGradient> {

public:

  constexpr TemperatureGradientMagnitude() noexcept : DimensionalScalarQuantity<Unit::TemperatureGradient>() {}

  constexpr TemperatureGradientMagnitude(double value, Unit::TemperatureGradient unit) noexcept : DimensionalScalarQuantity<Unit::TemperatureGradient>(value, unit) {}

  constexpr TemperatureGradientMagnitude(const TemperatureGradient& temperature_gradient) noexcept;

  constexpr TemperatureGradientMagnitude(const TemperatureDifference& temperature_difference, const Length& length) noexcept : DimensionalScalarQuantity<Unit::TemperatureGradient>(temperature_difference.value() / length.value()) {}

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
    return {*this, length};
  }

  constexpr TemperatureGradient operator*(const Direction& direction) const noexcept;

protected:

  constexpr TemperatureGradientMagnitude(double value) noexcept : DimensionalScalarQuantity<Unit::TemperatureGradient>(value) {}

};

template <> constexpr bool sort(const TemperatureGradientMagnitude& temperature_gradient_magnitude_1, const TemperatureGradientMagnitude& temperature_gradient_magnitude_2) noexcept {
  return sort(temperature_gradient_magnitude_1.value(), temperature_gradient_magnitude_2.value());
}

constexpr TemperatureDifference::TemperatureDifference(const TemperatureGradientMagnitude& temperature_gradient_magnitude, const Length& length) noexcept : TemperatureDifference(temperature_gradient_magnitude.value() * length.value()) {}

constexpr TemperatureGradientMagnitude TemperatureDifference::operator/(const Length& length) const noexcept {
  return {*this, length};
}

} // namespace PhQ

namespace std {

template <> struct hash<PhQ::TemperatureGradientMagnitude> {
  size_t operator()(const PhQ::TemperatureGradientMagnitude& temperature_gradient_magnitude) const {
    return hash<double>()(temperature_gradient_magnitude.value());
  }
};

} // namespace std
