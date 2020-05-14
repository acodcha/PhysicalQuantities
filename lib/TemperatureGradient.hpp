// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of PhysicalQuantities, a C++17 library of physical quantities, units of measure, and related concepts for scientific computation.
// PhysicalQuantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// PhysicalQuantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with PhysicalQuantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Angle.hpp"
#include "Quantity/DimensionalVector.hpp"
#include "TemperatureGradientMagnitude.hpp"

namespace PhQ {

class TemperatureGradient : public DimensionalVectorQuantity<Unit::TemperatureGradient> {

public:

  constexpr TemperatureGradient() noexcept : DimensionalVectorQuantity<Unit::TemperatureGradient>() {}

  constexpr TemperatureGradient(const Value::Vector& value, Unit::TemperatureGradient unit) noexcept : DimensionalVectorQuantity<Unit::TemperatureGradient>(value, unit) {}

  constexpr TemperatureGradient(const TemperatureGradientMagnitude& temperature_gradient_magnitude, const Direction& direction) noexcept : DimensionalVectorQuantity<Unit::TemperatureGradient>(temperature_gradient_magnitude * direction) {}

  constexpr TemperatureGradientMagnitude magnitude() const noexcept {
    return {value_.magnitude()};
  }

  constexpr Angle angle(const TemperatureGradient& temperature_gradient) const noexcept {
    return value_.angle(temperature_gradient.value_);
  }

  constexpr bool operator==(const TemperatureGradient& temperature_gradient) const noexcept {
    return value_ == temperature_gradient.value_;
  }

  constexpr bool operator!=(const TemperatureGradient& temperature_gradient) const noexcept {
    return value_ != temperature_gradient.value_;
  }

  constexpr TemperatureGradient operator+(const TemperatureGradient& temperature_gradient) const noexcept {
    return {value_ + temperature_gradient.value_};
  }

  constexpr void operator+=(const TemperatureGradient& temperature_gradient) noexcept {
    value_ += temperature_gradient.value_;
  }

  constexpr TemperatureGradient operator-(const TemperatureGradient& temperature_gradient) const noexcept {
    return {value_ - temperature_gradient.value_};
  }

  constexpr void operator-=(const TemperatureGradient& temperature_gradient) noexcept {
    value_ -= temperature_gradient.value_;
  }

protected:

  constexpr TemperatureGradient(const Value::Vector& value) noexcept : DimensionalVectorQuantity<Unit::TemperatureGradient>(value) {}

  friend class Direction;
  friend class TemperatureGradientMagnitude;

};

template <> constexpr bool sort(const TemperatureGradient& temperature_gradient_1, const TemperatureGradient& temperature_gradient_2) noexcept {
  return sort(temperature_gradient_1.value(), temperature_gradient_2.value());
}

constexpr TemperatureGradient Direction::operator*(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept {
  return {{x_y_z_[0] * temperature_gradient_magnitude.value_, x_y_z_[1] * temperature_gradient_magnitude.value_, x_y_z_[2] * temperature_gradient_magnitude.value_}};
}

constexpr TemperatureGradient TemperatureGradientMagnitude::operator*(const Direction& direction) const noexcept {
  return {{direction.x() * value_, direction.y() * value_, direction.z() * value_}};
}

constexpr Angle::Angle(const TemperatureGradient& temperature_gradient_1, const TemperatureGradient& temperature_gradient_2) noexcept : DimensionalScalarQuantity<Unit::Angle>(temperature_gradient_1.angle(temperature_gradient_2)) {}

constexpr TemperatureGradientMagnitude::TemperatureGradientMagnitude(const TemperatureGradient& temperature_gradient) noexcept : TemperatureGradientMagnitude(temperature_gradient.magnitude()) {}

} // namespace PhQ