// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of Physical Quantities (PhQ), a C++17 header-only library of physical quantities, physical models, and units of measure for scientific computation.
// Physical Quantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// Physical Quantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with Physical Quantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Base.hpp"

namespace PhQ {

namespace Unit {

enum class Acceleration : uint_least8_t {
  MilePerSquareSecond,
  KilometrePerSquareSecond,
  YardPerSquareSecond,
  MetrePerSquareSecond,
  FootPerSquareSecond,
  DecimetrePerSquareSecond,
  InchPerSquareSecond,
  CentimetrePerSquareSecond,
  MillimetrePerSquareSecond,
  MilliinchPerSquareSecond,
  MicrometrePerSquareSecond,
  MicroinchPerSquareSecond
};

} // namespace Unit

template <> const std::map<Unit::Acceleration, std::string> abbreviations<Unit::Acceleration>{
  {Unit::Acceleration::MilePerSquareSecond, "mi/s^2"},
  {Unit::Acceleration::KilometrePerSquareSecond, "km/s^2"},
  {Unit::Acceleration::YardPerSquareSecond, "yd/s^2"},
  {Unit::Acceleration::MetrePerSquareSecond, "m/s^2"},
  {Unit::Acceleration::FootPerSquareSecond, "ft/s^2"},
  {Unit::Acceleration::DecimetrePerSquareSecond, "dm/s^2"},
  {Unit::Acceleration::InchPerSquareSecond, "in/s^2"},
  {Unit::Acceleration::CentimetrePerSquareSecond, "cm/s^2"},
  {Unit::Acceleration::MillimetrePerSquareSecond, "mm/s^2"},
  {Unit::Acceleration::MilliinchPerSquareSecond, "thou/s^2"},
  {Unit::Acceleration::MicrometrePerSquareSecond, "μm/s^2"},
  {Unit::Acceleration::MicroinchPerSquareSecond, "μin/s^2"}
};

template <> const std::unordered_map<std::string, Unit::Acceleration> spellings<Unit::Acceleration>{
  {"mi/s^2", Unit::Acceleration::MilePerSquareSecond},
  {"mi/s2", Unit::Acceleration::MilePerSquareSecond},
  {"mi/s/s", Unit::Acceleration::MilePerSquareSecond},
  {"mi/sec^2", Unit::Acceleration::MilePerSquareSecond},
  {"mi/sec2", Unit::Acceleration::MilePerSquareSecond},
  {"mi/sec/sec", Unit::Acceleration::MilePerSquareSecond},
  {"km/s^2", Unit::Acceleration::KilometrePerSquareSecond},
  {"km/s2", Unit::Acceleration::KilometrePerSquareSecond},
  {"km/s/s", Unit::Acceleration::KilometrePerSquareSecond},
  {"km/sec^2", Unit::Acceleration::KilometrePerSquareSecond},
  {"km/sec2", Unit::Acceleration::KilometrePerSquareSecond},
  {"km/sec/sec", Unit::Acceleration::KilometrePerSquareSecond},
  {"yd/s^2", Unit::Acceleration::YardPerSquareSecond},
  {"yd/s2", Unit::Acceleration::YardPerSquareSecond},
  {"yd/s/s", Unit::Acceleration::YardPerSquareSecond},
  {"yd/sec^2", Unit::Acceleration::YardPerSquareSecond},
  {"yd/sec2", Unit::Acceleration::YardPerSquareSecond},
  {"yd/sec/sec", Unit::Acceleration::YardPerSquareSecond},
  {"m/s^2", Unit::Acceleration::MetrePerSquareSecond},
  {"m/s2", Unit::Acceleration::MetrePerSquareSecond},
  {"m/s/s", Unit::Acceleration::MetrePerSquareSecond},
  {"m/sec^2", Unit::Acceleration::MetrePerSquareSecond},
  {"m/sec2", Unit::Acceleration::MetrePerSquareSecond},
  {"m/sec/sec", Unit::Acceleration::MetrePerSquareSecond},
  {"ft/s^2", Unit::Acceleration::FootPerSquareSecond},
  {"ft/s2", Unit::Acceleration::FootPerSquareSecond},
  {"ft/s/s", Unit::Acceleration::FootPerSquareSecond},
  {"ft/sec^2", Unit::Acceleration::FootPerSquareSecond},
  {"ft/sec2", Unit::Acceleration::FootPerSquareSecond},
  {"ft/sec/sec", Unit::Acceleration::FootPerSquareSecond},
  {"dm/s^2", Unit::Acceleration::DecimetrePerSquareSecond},
  {"dm/s2", Unit::Acceleration::DecimetrePerSquareSecond},
  {"dm/s/s", Unit::Acceleration::DecimetrePerSquareSecond},
  {"dm/sec^2", Unit::Acceleration::DecimetrePerSquareSecond},
  {"dm/sec2", Unit::Acceleration::DecimetrePerSquareSecond},
  {"dm/sec/sec", Unit::Acceleration::DecimetrePerSquareSecond},
  {"in/s^2", Unit::Acceleration::InchPerSquareSecond},
  {"in/s2", Unit::Acceleration::InchPerSquareSecond},
  {"in/s/s", Unit::Acceleration::InchPerSquareSecond},
  {"in/sec^2", Unit::Acceleration::InchPerSquareSecond},
  {"in/sec2", Unit::Acceleration::InchPerSquareSecond},
  {"in/sec/sec", Unit::Acceleration::InchPerSquareSecond},
  {"cm/s^2", Unit::Acceleration::CentimetrePerSquareSecond},
  {"cm/s2", Unit::Acceleration::CentimetrePerSquareSecond},
  {"cm/s/s", Unit::Acceleration::CentimetrePerSquareSecond},
  {"cm/sec^2", Unit::Acceleration::CentimetrePerSquareSecond},
  {"cm/sec2", Unit::Acceleration::CentimetrePerSquareSecond},
  {"cm/sec/sec", Unit::Acceleration::CentimetrePerSquareSecond},
  {"mm/s^2", Unit::Acceleration::MillimetrePerSquareSecond},
  {"mm/s2", Unit::Acceleration::MillimetrePerSquareSecond},
  {"mm/s/s", Unit::Acceleration::MillimetrePerSquareSecond},
  {"mm/sec^2", Unit::Acceleration::MillimetrePerSquareSecond},
  {"mm/sec2", Unit::Acceleration::MillimetrePerSquareSecond},
  {"mm/sec/sec", Unit::Acceleration::MillimetrePerSquareSecond},
  {"milin/s^2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milin/s2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milin/s/s", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milin/sec^2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milin/sec2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milin/sec/sec", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milliinch/s^2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milliinch/s2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milliinch/s/s", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milliinch/sec^2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milliinch/sec2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"milliinch/sec/sec", Unit::Acceleration::MilliinchPerSquareSecond},
  {"thou/s^2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"thou/s2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"thou/s/s", Unit::Acceleration::MilliinchPerSquareSecond},
  {"thou/sec^2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"thou/sec2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"thou/sec/sec", Unit::Acceleration::MilliinchPerSquareSecond},
  {"mil/s^2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"mil/s2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"mil/s/s", Unit::Acceleration::MilliinchPerSquareSecond},
  {"mil/sec^2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"mil/sec2", Unit::Acceleration::MilliinchPerSquareSecond},
  {"mil/sec/sec", Unit::Acceleration::MilliinchPerSquareSecond},
  {"μm/s^2", Unit::Acceleration::MicrometrePerSquareSecond},
  {"μm/s2", Unit::Acceleration::MicrometrePerSquareSecond},
  {"μm/s/s", Unit::Acceleration::MicrometrePerSquareSecond},
  {"μm/sec^2", Unit::Acceleration::MicrometrePerSquareSecond},
  {"μm/sec2", Unit::Acceleration::MicrometrePerSquareSecond},
  {"μm/sec/sec", Unit::Acceleration::MicrometrePerSquareSecond},
  {"um/s^2", Unit::Acceleration::MicrometrePerSquareSecond},
  {"um/s2", Unit::Acceleration::MicrometrePerSquareSecond},
  {"um/s/s", Unit::Acceleration::MicrometrePerSquareSecond},
  {"um/sec^2", Unit::Acceleration::MicrometrePerSquareSecond},
  {"um/sec2", Unit::Acceleration::MicrometrePerSquareSecond},
  {"um/sec/sec", Unit::Acceleration::MicrometrePerSquareSecond},
  {"μin/s^2", Unit::Acceleration::MicroinchPerSquareSecond},
  {"μin/s2", Unit::Acceleration::MicroinchPerSquareSecond},
  {"μin/s/s", Unit::Acceleration::MicroinchPerSquareSecond},
  {"μin/sec^2", Unit::Acceleration::MicroinchPerSquareSecond},
  {"μin/sec2", Unit::Acceleration::MicroinchPerSquareSecond},
  {"μin/sec/sec", Unit::Acceleration::MicroinchPerSquareSecond},
  {"uin/s^2", Unit::Acceleration::MicroinchPerSquareSecond},
  {"uin/s2", Unit::Acceleration::MicroinchPerSquareSecond},
  {"uin/s/s", Unit::Acceleration::MicroinchPerSquareSecond},
  {"uin/sec^2", Unit::Acceleration::MicroinchPerSquareSecond},
  {"uin/sec2", Unit::Acceleration::MicroinchPerSquareSecond},
  {"uin/sec/sec", Unit::Acceleration::MicroinchPerSquareSecond}
};

template <> const std::map<System, Unit::Acceleration> consistent_units<Unit::Acceleration>{
  {System::MetreKilogramSecondKelvin, Unit::Acceleration::MetrePerSquareSecond},
  {System::MillimetreGramSecondKelvin, Unit::Acceleration::MillimetrePerSquareSecond},
  {System::FootPoundSecondRankine, Unit::Acceleration::FootPerSquareSecond},
  {System::InchPoundSecondRankine, Unit::Acceleration::InchPerSquareSecond}
};

template <> const std::map<Unit::Acceleration, System> related_systems<Unit::Acceleration>{
  {Unit::Acceleration::MetrePerSquareSecond, System::MetreKilogramSecondKelvin},
  {Unit::Acceleration::MillimetrePerSquareSecond, System::MillimetreGramSecondKelvin},
  {Unit::Acceleration::FootPerSquareSecond, System::FootPoundSecondRankine},
  {Unit::Acceleration::InchPerSquareSecond, System::InchPoundSecondRankine},
};

template <> constexpr const Unit::Acceleration standard_unit<Unit::Acceleration>{Unit::Acceleration::MetrePerSquareSecond};

template <> constexpr const Dimension::Set dimension<Unit::Acceleration>{Dimension::Set{Dimension::Length{1}, Dimension::Mass{}, Dimension::Time{-2}}};

template <> const std::map<Unit::Acceleration, std::map<Unit::Acceleration, std::function<void(std::vector<double>&)>>> conversions<Unit::Acceleration>{
  {Unit::Acceleration::MilePerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1.609344;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1760.0;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1609.344;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 5280.0;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 16093.44;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 63360.0;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 160934.4;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1609344.0;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 63360000.0;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1609344000.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 63360000000.0;});}}
  }},
  {Unit::Acceleration::KilometrePerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 1.609344;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0009144;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000.0;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0003048;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 10000.0;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0000254;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 100000.0;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000000.0;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0000000254;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000000000.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0000000000254;});}}
  }},
  {Unit::Acceleration::YardPerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 1760.0;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0009144;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.9144;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 3.0;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 9.144;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 36.0;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 91.44;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 914.4;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 36000.0;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 914400.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 36000000.0;});}}
  }},
  {Unit::Acceleration::MetrePerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 1609.344;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.001;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.9144;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.3048;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 10.0;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0254;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 100.0;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000.0;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0000254;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000000.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0000000254;});}}
  }},
  {Unit::Acceleration::FootPerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 5280.0;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0003048;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 3.0;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.3048;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 3.048;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 12.0;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 30.48;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 304.8;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 12000.0;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 304800.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 12000000.0;});}}
  }},
  {Unit::Acceleration::DecimetrePerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 16093.44;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0001;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 9.144;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.1;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 3.048;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.254;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 10.0;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 100.0;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.000254;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 100000.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.000000254;});}}
  }},
  {Unit::Acceleration::InchPerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 63360.0;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0000254;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 36.0;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0254;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 12.0;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.254;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 2.54;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 25.4;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000.0;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 25400.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000000.0;});}}
  }},
  {Unit::Acceleration::CentimetrePerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 160934.4;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.00001;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 91.44;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.01;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 30.48;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.1;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 2.54;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 10.0;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.00254;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 10000.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.00000254;});}}
  }},
  {Unit::Acceleration::MillimetrePerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 1609344.0;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.000001;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 914.4;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.001;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 304.8;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.01;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 25.4;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.1;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0254;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000.0;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0000254;});}}
  }},
  {Unit::Acceleration::MilliinchPerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 63360000.0;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0000000254;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 36000.0;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0000254;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 12000.0;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.000254;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.001;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.00254;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0254;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 25.4;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 1000.0;});}}
  }},
  {Unit::Acceleration::MicrometrePerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 1609344000.0;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.000000001;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 914400.0;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.000001;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 304800.0;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.00001;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 25400.0;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0001;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.001;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 25.4;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 0.0254;});}}
  }},
  {Unit::Acceleration::MicroinchPerSquareSecond, {
    {Unit::Acceleration::MilePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 63360000000.0;});}},
    {Unit::Acceleration::KilometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0000000000254;});}},
    {Unit::Acceleration::YardPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 36000000.0;});}},
    {Unit::Acceleration::MetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0000000254;});}},
    {Unit::Acceleration::FootPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value /= 12000000.0;});}},
    {Unit::Acceleration::DecimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.000000254;});}},
    {Unit::Acceleration::InchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.000001;});}},
    {Unit::Acceleration::CentimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.00000254;});}},
    {Unit::Acceleration::MillimetrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0000254;});}},
    {Unit::Acceleration::MilliinchPerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.001;});}},
    {Unit::Acceleration::MicrometrePerSquareSecond, [](std::vector<double>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{value *= 0.0254;});}},
    {Unit::Acceleration::MicroinchPerSquareSecond, [](std::vector<double>& values)->void{}}
  }}
};

} // namespace PhQ
