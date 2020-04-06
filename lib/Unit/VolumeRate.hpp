// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of PhysicalQuantities, a C++17 library of physical quantities, units of measure, and related concepts for scientific computation.
// PhysicalQuantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// PhysicalQuantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with PhysicalQuantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Base.hpp"

namespace PhQ {

namespace Unit {

enum class VolumeRate : uint_least8_t {
  CubicMilePerSecond,
  CubicKilometrePerSecond,
  CubicYardPerSecond,
  CubicMetrePerSecond,
  CubicFootPerSecond,
  CubicDecimetrePerSecond,
  LitrePerSecond,
  CubicInchPerSecond,
  CubicCentimetrePerSecond,
  MillilitrePerSecond,
  CubicMillimetrePerSecond,
  CubicMilliinchPerSecond,
  CubicMicrometrePerSecond,
  CubicMicroinchPerSecond
};

} // namespace Unit

template <> const std::map<Unit::VolumeRate, std::string> abbreviations<Unit::VolumeRate>{
  {Unit::VolumeRate::CubicMilePerSecond, "mi^3/s"},
  {Unit::VolumeRate::CubicKilometrePerSecond, "km^3/s"},
  {Unit::VolumeRate::CubicYardPerSecond, "yd^3/s"},
  {Unit::VolumeRate::CubicMetrePerSecond, "m^3/s"},
  {Unit::VolumeRate::CubicFootPerSecond, "ft^3/s"},
  {Unit::VolumeRate::CubicDecimetrePerSecond, "dm^3/s"},
  {Unit::VolumeRate::LitrePerSecond, "L/s"},
  {Unit::VolumeRate::CubicInchPerSecond, "in^3/s"},
  {Unit::VolumeRate::CubicCentimetrePerSecond, "cm^3/s"},
  {Unit::VolumeRate::MillilitrePerSecond, "mL/s"},
  {Unit::VolumeRate::CubicMillimetrePerSecond, "mm^3/s"},
  {Unit::VolumeRate::CubicMilliinchPerSecond, "thou^3/s"},
  {Unit::VolumeRate::CubicMicrometrePerSecond, "μm^3/s"},
  {Unit::VolumeRate::CubicMicroinchPerSecond, "μin^3/s"}
};

template <> const std::unordered_map<std::string, Unit::VolumeRate> spellings<Unit::VolumeRate>{
  {"mi^3/s", Unit::VolumeRate::CubicMilePerSecond},
  {"mi^3/sec", Unit::VolumeRate::CubicMilePerSecond},
  {"mi3/s", Unit::VolumeRate::CubicMilePerSecond},
  {"mi3/sec", Unit::VolumeRate::CubicMilePerSecond},
  {"km^3/s", Unit::VolumeRate::CubicKilometrePerSecond},
  {"km^3/sec", Unit::VolumeRate::CubicKilometrePerSecond},
  {"km3/s", Unit::VolumeRate::CubicKilometrePerSecond},
  {"km3/sec", Unit::VolumeRate::CubicKilometrePerSecond},
  {"yd^3/s", Unit::VolumeRate::CubicYardPerSecond},
  {"yd^3/sec", Unit::VolumeRate::CubicYardPerSecond},
  {"yd3/s", Unit::VolumeRate::CubicYardPerSecond},
  {"yd3/sec", Unit::VolumeRate::CubicYardPerSecond},
  {"m^3/s", Unit::VolumeRate::CubicMetrePerSecond},
  {"m^3/sec", Unit::VolumeRate::CubicMetrePerSecond},
  {"m3/s", Unit::VolumeRate::CubicMetrePerSecond},
  {"m3/sec", Unit::VolumeRate::CubicMetrePerSecond},
  {"ft^3/s", Unit::VolumeRate::CubicFootPerSecond},
  {"ft^3/sec", Unit::VolumeRate::CubicFootPerSecond},
  {"ft3/s", Unit::VolumeRate::CubicFootPerSecond},
  {"ft3/sec", Unit::VolumeRate::CubicFootPerSecond},
  {"dm^3/s", Unit::VolumeRate::CubicDecimetrePerSecond},
  {"dm^3/sec", Unit::VolumeRate::CubicDecimetrePerSecond},
  {"dm3/s", Unit::VolumeRate::CubicDecimetrePerSecond},
  {"dm3/sec", Unit::VolumeRate::CubicDecimetrePerSecond},
  {"L^3/s", Unit::VolumeRate::LitrePerSecond},
  {"L^3/sec", Unit::VolumeRate::LitrePerSecond},
  {"L3/s", Unit::VolumeRate::LitrePerSecond},
  {"L3/sec", Unit::VolumeRate::LitrePerSecond},
  {"in^3/s", Unit::VolumeRate::CubicInchPerSecond},
  {"in^3/sec", Unit::VolumeRate::CubicInchPerSecond},
  {"in3/s", Unit::VolumeRate::CubicInchPerSecond},
  {"in3/sec", Unit::VolumeRate::CubicInchPerSecond},
  {"cm^3/s", Unit::VolumeRate::CubicCentimetrePerSecond},
  {"cm^3/sec", Unit::VolumeRate::CubicCentimetrePerSecond},
  {"cm3/s", Unit::VolumeRate::CubicCentimetrePerSecond},
  {"cm3/sec", Unit::VolumeRate::CubicCentimetrePerSecond},
  {"mL^3/s", Unit::VolumeRate::MillilitrePerSecond},
  {"mL^3/sec", Unit::VolumeRate::MillilitrePerSecond},
  {"mL3/s", Unit::VolumeRate::MillilitrePerSecond},
  {"mL3/sec", Unit::VolumeRate::MillilitrePerSecond},
  {"mm^3/s", Unit::VolumeRate::CubicMillimetrePerSecond},
  {"mm^3/sec", Unit::VolumeRate::CubicMillimetrePerSecond},
  {"mm3/s", Unit::VolumeRate::CubicMillimetrePerSecond},
  {"mm3/sec", Unit::VolumeRate::CubicMillimetrePerSecond},
  {"thou^3/s", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"thou^3/sec", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"thou3/s", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"thou3/sec", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"mil^3/s", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"mil^3/sec", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"mil3/s", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"mil3/sec", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"millinch^3/s", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"millinch^3/sec", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"millinch3/s", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"millinch3/sec", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"milliinch^3/s", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"milliinch^3/sec", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"milliinch3/s", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"milliinch3/sec", Unit::VolumeRate::CubicMilliinchPerSecond},
  {"μm^3/s", Unit::VolumeRate::CubicMicrometrePerSecond},
  {"μm^3/sec", Unit::VolumeRate::CubicMicrometrePerSecond},
  {"μm3/s", Unit::VolumeRate::CubicMicrometrePerSecond},
  {"μm3/sec", Unit::VolumeRate::CubicMicrometrePerSecond},
  {"um^3/s", Unit::VolumeRate::CubicMicrometrePerSecond},
  {"um^3/sec", Unit::VolumeRate::CubicMicrometrePerSecond},
  {"um3/s", Unit::VolumeRate::CubicMicrometrePerSecond},
  {"um3/sec", Unit::VolumeRate::CubicMicrometrePerSecond},
  {"μin^3/s", Unit::VolumeRate::CubicMicroinchPerSecond},
  {"μin^3/sec", Unit::VolumeRate::CubicMicroinchPerSecond},
  {"μin3/s", Unit::VolumeRate::CubicMicroinchPerSecond},
  {"μin3/sec", Unit::VolumeRate::CubicMicroinchPerSecond},
  {"uin^3/s", Unit::VolumeRate::CubicMicroinchPerSecond},
  {"uin^3/sec", Unit::VolumeRate::CubicMicroinchPerSecond},
  {"uin3/s", Unit::VolumeRate::CubicMicroinchPerSecond},
  {"uin3/sec", Unit::VolumeRate::CubicMicroinchPerSecond}
};

template <> const std::map<System, Unit::VolumeRate> consistent_units<Unit::VolumeRate>{
  {System::MetreKilogramSecondKelvin, Unit::VolumeRate::CubicMetrePerSecond},
  {System::MillimetreGramSecondKelvin, Unit::VolumeRate::CubicMillimetrePerSecond},
  {System::FootPoundSecondRankine, Unit::VolumeRate::CubicFootPerSecond},
  {System::InchPoundSecondRankine, Unit::VolumeRate::CubicInchPerSecond}
};

template <> const std::map<Unit::VolumeRate, System> related_systems<Unit::VolumeRate>{
  {Unit::VolumeRate::CubicMetrePerSecond, System::MetreKilogramSecondKelvin},
  {Unit::VolumeRate::CubicMillimetrePerSecond, System::MillimetreGramSecondKelvin},
  {Unit::VolumeRate::CubicFootPerSecond, System::FootPoundSecondRankine},
  {Unit::VolumeRate::CubicInchPerSecond, System::InchPoundSecondRankine},
};

template <> constexpr const Unit::VolumeRate standard_unit<Unit::VolumeRate>{Unit::VolumeRate::CubicMetrePerSecond};

template <> constexpr const Dimension::Set dimension<Unit::VolumeRate>{Dimension::Set{Dimension::Length{3}, Dimension::Mass{}, Dimension::Time{-1}}};

template <size_t size> const std::map<Unit::VolumeRate, std::map<Unit::VolumeRate, std::function<void(std::array<double, size>&)>>> conversions<Unit::VolumeRate, size>{
  {Unit::VolumeRate::CubicMilePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1.609344, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1760.0, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1609.344, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(5280.0, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(16093.44, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(16093.44, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(63360.0, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(160934.4, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(160934.4, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1609344.0, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(63360000.0, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1609344000.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(63360000000.0, 3);});}}}},
  {Unit::VolumeRate::CubicKilometrePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(1.609344, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0009144, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000.0, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0003048, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10000.0, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10000.0, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0000254, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(100000.0, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(100000.0, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000000.0, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0000000254, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000000000.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0000000000254, 3);});}}}},
  {Unit::VolumeRate::CubicYardPerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(1760.0, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0009144, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.9144, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(3.0, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(9.144, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(9.144, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(36.0, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(91.44, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(91.44, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(914.4, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(36000.0, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(914400.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(36000000.0, 3);});}}}},
  {Unit::VolumeRate::CubicMetrePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(1609.344, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.001, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.9144, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.3048, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10.0, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10.0, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0254, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(100.0, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(100.0, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000.0, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0000254, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000000.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0000000254, 3);});}}}},
  {Unit::VolumeRate::CubicFootPerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(5280.0, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0003048, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(3.0, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.3048, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(3.048, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(3.048, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(12.0, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(30.48, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(30.48, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(304.8, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(12000.0, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(304800.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(12000000.0, 3);});}}}},
  {Unit::VolumeRate::CubicDecimetrePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(16093.44, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0001, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(9.144, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.1, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(3.048, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.254, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10.0, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10.0, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(100.0, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.000254, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(100000.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.000000254, 3);});}}}},
  {Unit::VolumeRate::LitrePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(16093.44, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0001, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(9.144, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.1, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(3.048, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.254, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10.0, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10.0, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(100.0, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.000254, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(100000.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.000000254, 3);});}}}},
  {Unit::VolumeRate::CubicInchPerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(63360.0, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0000254, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(36.0, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0254, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(12.0, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.254, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.254, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(2.54, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(2.54, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(25.4, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000.0, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(25400.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000000.0, 3);});}}}},
  {Unit::VolumeRate::CubicCentimetrePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(160934.4, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.00001, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(91.44, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.01, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(30.48, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.1, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.1, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(2.54, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10.0, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.00254, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10000.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.00000254, 3);});}}}},
  {Unit::VolumeRate::MillilitrePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(160934.4, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.00001, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(91.44, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.01, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(30.48, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.1, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.1, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(2.54, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10.0, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.00254, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(10000.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.00000254, 3);});}}}},
  {Unit::VolumeRate::CubicMillimetrePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(1609344.0, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.000001, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(914.4, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.001, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(304.8, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.01, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.01, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(25.4, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.1, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.1, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0254, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000.0, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0000254, 3);});}}}},
  {Unit::VolumeRate::CubicMilliinchPerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(63360000.0, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0000000254, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(36000.0, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0000254, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(12000.0, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.000254, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.000254, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.001, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.00254, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.00254, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0254, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(25.4, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(1000.0, 3);});}}}},
  {Unit::VolumeRate::CubicMicrometrePerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(1609344000.0, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.000000001, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(914400.0, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.000001, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(304800.0, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.00001, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.00001, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(25400.0, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0001, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0001, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.001, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(25.4, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(0.0254, 3);});}}}},
  {Unit::VolumeRate::CubicMicroinchPerSecond, {
    {Unit::VolumeRate::CubicMilePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(63360000000.0, 3);});}},
    {Unit::VolumeRate::CubicKilometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0000000000254, 3);});}},
    {Unit::VolumeRate::CubicYardPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(36000000.0, 3);});}},
    {Unit::VolumeRate::CubicMetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0000000254, 3);});}},
    {Unit::VolumeRate::CubicFootPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= std::pow(12000000.0, 3);});}},
    {Unit::VolumeRate::CubicDecimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.000000254, 3);});}},
    {Unit::VolumeRate::LitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.000000254, 3);});}},
    {Unit::VolumeRate::CubicInchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.000001, 3);});}},
    {Unit::VolumeRate::CubicCentimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.00000254, 3);});}},
    {Unit::VolumeRate::MillilitrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.00000254, 3);});}},
    {Unit::VolumeRate::CubicMillimetrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0000254, 3);});}},
    {Unit::VolumeRate::CubicMilliinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.001, 3);});}},
    {Unit::VolumeRate::CubicMicrometrePerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= std::pow(0.0254, 3);});}},
    {Unit::VolumeRate::CubicMicroinchPerSecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}}}}
};

} // namespace PhQ
