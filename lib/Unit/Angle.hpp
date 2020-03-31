#pragma once

#include "Base.hpp"

namespace PhQ {

namespace Unit {

enum class Angle : uint_least8_t {
  Radian,
  Degree,
  Arcminute,
  Arcsecond
};

} // namespace Unit

template <> const std::map<Unit::Angle, std::string> abbreviations<Unit::Angle>{
  {Unit::Angle::Radian, "rad"},
  {Unit::Angle::Degree, "deg"},
  {Unit::Angle::Arcminute, "'"},
  {Unit::Angle::Arcsecond, "\""}
};

template <> const std::unordered_map<std::string, Unit::Angle> spellings<Unit::Angle>{
  {"rad", Unit::Angle::Radian},
  {"radian", Unit::Angle::Radian},
  {"radians", Unit::Angle::Radian},
  {"deg", Unit::Angle::Degree},
  {"degree", Unit::Angle::Degree},
  {"degrees", Unit::Angle::Degree},
  {"°", Unit::Angle::Degree},
  {"'", Unit::Angle::Arcminute},
  {"am", Unit::Angle::Arcminute},
  {"arcmin", Unit::Angle::Arcminute},
  {"arcminute", Unit::Angle::Arcminute},
  {"arcminutes", Unit::Angle::Arcminute},
  {"\"", Unit::Angle::Arcsecond},
  {"as", Unit::Angle::Arcsecond},
  {"arcs", Unit::Angle::Arcsecond},
  {"arcsec", Unit::Angle::Arcsecond},
  {"arcsecond", Unit::Angle::Arcsecond},
  {"arcseconds", Unit::Angle::Arcsecond}
};

template <> const std::map<System, Unit::Angle> consistent_units<Unit::Angle>{
  {System::MetreKilogramSecondKelvin, Unit::Angle::Radian},
  {System::MillimetreGramSecondKelvin, Unit::Angle::Radian},
  {System::FootPoundSecondRankine, Unit::Angle::Radian},
  {System::InchPoundSecondRankine, Unit::Angle::Radian}
};

template <> constexpr const Unit::Angle standard_unit<Unit::Angle>{Unit::Angle::Radian};

template <> constexpr const Dimension::Set dimension<Unit::Angle>{Dimension::Set{}};

template <size_t size> const std::map<Unit::Angle, std::map<Unit::Angle, std::function<void(std::array<double, size>&)>>> conversions<Unit::Angle, size>{
  {Unit::Angle::Radian, {
    {Unit::Angle::Radian, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::Angle::Degree, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= 180.0 / M_PI;});}},
    {Unit::Angle::Arcminute, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= 10800.0 / M_PI;});}},
    {Unit::Angle::Arcsecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= 648000.0 / M_PI;});}}}},
  {Unit::Angle::Degree, {
    {Unit::Angle::Radian, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= M_PI / 180.0;});}},
    {Unit::Angle::Degree, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::Angle::Arcminute, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= 60.0;});}},
    {Unit::Angle::Arcsecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= 3600.0;});}}}},
  {Unit::Angle::Arcminute, {
    {Unit::Angle::Radian, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= M_PI / 10800.0;});}},
    {Unit::Angle::Degree, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= 60.0;});}},
    {Unit::Angle::Arcminute, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}},
    {Unit::Angle::Arcsecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= 60.0;});}}}},
  {Unit::Angle::Arcsecond, {
    {Unit::Angle::Radian, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value *= M_PI / 648000.0;});}},
    {Unit::Angle::Degree, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= 3600.0;});}},
    {Unit::Angle::Arcminute, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{
      value /= 60.0;});}},
    {Unit::Angle::Arcsecond, [](std::array<double, size>& values)->void{std::for_each(values.begin(), values.end(), [](double& value)->void{});}}}}
};

} // namespace PhQ
