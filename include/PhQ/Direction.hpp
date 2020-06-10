// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of PhysicalQuantities, a C++17 library of physical quantities, units of measure, and related concepts for scientific computation.
// PhysicalQuantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// PhysicalQuantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with PhysicalQuantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Base/String.hpp"
#include "Base/Type.hpp"

namespace PhQ {

// Forward declarations.
namespace Value {
class Vector;
class SymmetricDyadic;
class Dyadic;
} // namespace Value
class Acceleration;
class AccelerationMagnitude;
class Area;
class AreaVector;
class Angle;
class Displacement;
class Force;
class ForceMagnitude;
class HeatFlux;
class HeatFluxMagnitude;
class Length;
class Position;
class Speed;
class StaticPressure;
class TemperatureGradient;
class TemperatureGradientMagnitude;
class Traction;
class Velocity;

class Direction {

public:

  constexpr Direction() noexcept : x_y_z_({1.0, 0.0, 0.0}) {}

  constexpr Direction(const std::array<double, 3>& x_y_z) : x_y_z_() {
    const double magnitude{std::sqrt(std::pow(x_y_z[0], 2) + std::pow(x_y_z[1], 2) + std::pow(x_y_z[2], 2))};
    if (magnitude > 0.0) {
      x_y_z_[0] = x_y_z[0] / magnitude;
      x_y_z_[1] = x_y_z[1] / magnitude;
      x_y_z_[2] = x_y_z[2] / magnitude;
    } else {
      throw std::runtime_error{"Attempting to create a direction from (0, 0, 0)."};
    }
  }

  constexpr Direction(double x, double y, double z) : Direction(std::array<double, 3>{x, y, z}) {}

  constexpr Direction(const Value::Vector& vector);

  constexpr Direction(const Acceleration& acceleration);

  constexpr Direction(const AreaVector& area_vector);

  constexpr Direction(const Displacement& displacement);

  constexpr Direction(const Force& force);

  constexpr Direction(const HeatFlux& heat_flux);

  constexpr Direction(const Position& position);

  constexpr Direction(const TemperatureGradient& temperature_gradient);

  constexpr Direction(const Traction& traction);

  constexpr Direction(const Velocity& velocity);

  constexpr std::array<double, 3> x_y_z() const noexcept {
    return x_y_z_;
  }

  constexpr double x() const noexcept {
    return x_y_z_[0];
  }

  constexpr double y() const noexcept {
    return x_y_z_[1];
  }

  constexpr double z() const noexcept {
    return x_y_z_[2];
  }

  constexpr double magnitude() const noexcept {
    return std::sqrt(std::pow(x_y_z_[0], 2) + std::pow(x_y_z_[1], 2) + std::pow(x_y_z_[2], 2));
  }

  constexpr double dot(const Direction& direction) const noexcept {
    return x_y_z_[0] * direction.x_y_z_[0] + x_y_z_[1] * direction.x_y_z_[1] + x_y_z_[2] * direction.x_y_z_[2];
  }

  constexpr double dot(const Value::Vector& vector) const noexcept;

  constexpr Direction cross(const Direction& direction) const noexcept {
    return {
      x_y_z_[1] * direction.z() - x_y_z_[2] * direction.y(),
      x_y_z_[2] * direction.x() - x_y_z_[0] * direction.z(),
      x_y_z_[0] * direction.y() - x_y_z_[1] * direction.x()};
  }

  constexpr Value::Vector cross(const Value::Vector& vector) const noexcept;

  constexpr Value::Dyadic dyadic(const Direction& direction) const noexcept;

  constexpr Value::Dyadic dyadic(const Value::Vector& vector) const noexcept;

  constexpr Angle angle(const Direction& direction) const noexcept;

  constexpr Angle angle(const Value::Vector& vector) const noexcept;

  std::string print() const noexcept {
    return
      "(" + PhQ::number_to_string(x_y_z_[0]) + ", " +
      PhQ::number_to_string(x_y_z_[1]) + ", " +
      PhQ::number_to_string(x_y_z_[2]) + ")";
  }

  std::string json() const noexcept {
    return
      "{\"x\":" + PhQ::number_to_string(x_y_z_[0]) +
      ", \"y\":" + PhQ::number_to_string(x_y_z_[1]) +
      ", \"z\":" + PhQ::number_to_string(x_y_z_[2]) + "}";
  }

  std::string xml() const noexcept {
    return
      "<x>" + PhQ::number_to_string(x_y_z_[0]) +
      "</x><y>" + PhQ::number_to_string(x_y_z_[1]) +
      "</y><z>" + PhQ::number_to_string(x_y_z_[2]) + "</z>";
  }

  constexpr bool operator==(const Direction& direction) const noexcept {
    return x_y_z_[0] == direction.x_y_z_[0] && x_y_z_[1] == direction.x_y_z_[1] && x_y_z_[2] == direction.x_y_z_[2];
  }

  constexpr bool operator!=(const Direction& direction) const noexcept {
    return x_y_z_[0] != direction.x_y_z_[0] || x_y_z_[1] != direction.x_y_z_[1] || x_y_z_[2] != direction.x_y_z_[2];
  }

  constexpr Acceleration operator*(const AccelerationMagnitude& acceleration_magnitude) const noexcept;

  constexpr AreaVector operator*(const Area& area) const noexcept;

  constexpr Displacement operator*(const Length& length) const noexcept;

  constexpr Force operator*(const ForceMagnitude& force_magnitude) const noexcept;

  constexpr HeatFlux operator*(const HeatFluxMagnitude& heat_flux_magnitude) const noexcept;

  constexpr Traction operator*(const StaticPressure& static_pressure) const noexcept;

  constexpr Velocity operator*(const Speed& speed) const noexcept;

  constexpr TemperatureGradient operator*(const TemperatureGradientMagnitude& temperature_gradient_magnitude) const noexcept;

private:

  std::array<double, 3> x_y_z_;

};

template <> constexpr bool sort(const Direction& direction_1, const Direction& direction_2) noexcept {
  if (direction_1.x() == direction_2.x()) {
    if (direction_1.y() == direction_2.y()) {
      return direction_1.z() < direction_2.z();
    } else {
      return direction_1.y() < direction_2.y();
    }
  } else {
    return direction_1.x() < direction_2.x();
  }
}

} // namespace PhQ

std::ostream& operator<<(std::ostream& output_stream, const PhQ::Direction& direction) noexcept {
  output_stream << direction.print();
  return output_stream;
}