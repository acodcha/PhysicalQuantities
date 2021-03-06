// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of Physical Quantities (PhQ), a C++17 header-only library of physical quantities, physical models, and units of measure for scientific computation.
// Physical Quantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Physical Quantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with Physical Quantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Speed.hpp"
#include "Unit/Acceleration.hpp"

namespace PhQ {

// Forward declarations.
class Acceleration;
class Direction;

class AccelerationMagnitude : public DimensionalScalarQuantity<Unit::Acceleration> {

public:

  constexpr AccelerationMagnitude() noexcept : DimensionalScalarQuantity<Unit::Acceleration>() {}

  constexpr AccelerationMagnitude(double value, Unit::Acceleration unit) noexcept : DimensionalScalarQuantity<Unit::Acceleration>(value, unit) {}

  constexpr AccelerationMagnitude(const Speed& speed, const Duration& duration) noexcept : AccelerationMagnitude(speed.value() / duration.value()) {}

  constexpr AccelerationMagnitude(const Speed& speed, const Frequency& frequency) noexcept : AccelerationMagnitude(speed.value() * frequency.value()) {}

  constexpr AccelerationMagnitude(const Acceleration& acceleration) noexcept;

  constexpr bool operator==(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
    return value_ == acceleration_magnitude.value_;
  }

  constexpr bool operator!=(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
    return value_ != acceleration_magnitude.value_;
  }

  constexpr bool operator<(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
    return value_ < acceleration_magnitude.value_;
  }

  constexpr bool operator<=(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
    return value_ <= acceleration_magnitude.value_;
  }

  constexpr bool operator>(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
    return value_ > acceleration_magnitude.value_;
  }

  constexpr bool operator>=(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
    return value_ >= acceleration_magnitude.value_;
  }

  constexpr AccelerationMagnitude operator+(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
    return {value_ + acceleration_magnitude.value_};
  }

  constexpr void operator+=(const AccelerationMagnitude& acceleration_magnitude) noexcept {
    value_ += acceleration_magnitude.value_;
  }

  constexpr AccelerationMagnitude operator-(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
    return {value_ - acceleration_magnitude.value_};
  }

  constexpr void operator-=(const AccelerationMagnitude& acceleration_magnitude) noexcept {
    value_ -= acceleration_magnitude.value_;
  }

  constexpr Speed operator*(const Duration& duration) const noexcept {
    return {*this, duration};
  }

  constexpr Acceleration operator*(const Direction& direction) const noexcept;

  constexpr Speed operator/(const Frequency& frequency) const noexcept {
    return {*this, frequency};
  }

  constexpr Frequency operator/(const Speed& speed) const noexcept {
    return {*this, speed};
  }

protected:

  constexpr AccelerationMagnitude(double value) noexcept : DimensionalScalarQuantity<Unit::Acceleration>(value) {}

};

template <> constexpr bool sort(const AccelerationMagnitude& acceleration_magnitude_1, const AccelerationMagnitude& acceleration_magnitude_2) noexcept {
  return sort(acceleration_magnitude_1.value(), acceleration_magnitude_2.value());
}

constexpr Duration::Duration(const AccelerationMagnitude& acceleration_magnitude, const Speed& speed) noexcept : Duration(speed.value() / acceleration_magnitude.value()) {}

constexpr Frequency::Frequency(const AccelerationMagnitude& acceleration_magnitude, const Speed& speed) noexcept : Frequency(acceleration_magnitude.value() / speed.value()) {}

constexpr Speed::Speed(const AccelerationMagnitude& acceleration_magnitude, const Duration& duration) noexcept : Speed(acceleration_magnitude.value() * duration.value()) {}

constexpr Speed::Speed(const AccelerationMagnitude& acceleration_magnitude, const Frequency& frequency) noexcept : Speed(acceleration_magnitude.value() / frequency.value()) {}

constexpr AccelerationMagnitude Frequency::operator*(const Speed& speed) const noexcept {
  return {speed, *this};
}

constexpr AccelerationMagnitude Speed::operator*(const Frequency& frequency) const noexcept {
  return {*this, frequency};
}

constexpr AccelerationMagnitude Speed::operator/(const Duration& duration) const noexcept {
  return {*this, duration};
}

constexpr Duration Speed::operator/(const AccelerationMagnitude& acceleration_magnitude) const noexcept {
  return {acceleration_magnitude, *this};
}

} // namespace PhQ

namespace std {

template <> struct hash<PhQ::AccelerationMagnitude> {
  size_t operator()(const PhQ::AccelerationMagnitude& acceleration_magnitude) const {
    return hash<double>()(acceleration_magnitude.value());
  }
};

} // namespace std
