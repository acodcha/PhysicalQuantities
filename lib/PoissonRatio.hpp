// Copyright 2020 Alexandre Coderre-Chabot
// This file is part of PhysicalQuantities, a C++17 library of physical quantities, units of measure, and related concepts for scientific computation.
// PhysicalQuantities is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// PhysicalQuantities is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License along with PhysicalQuantities. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "Quantity/DimensionlessScalar.hpp"

namespace PhQ {

class PoissonRatio : public DimensionlessScalarQuantity {

public:

  PoissonRatio() noexcept : DimensionlessScalarQuantity() {}

  constexpr PoissonRatio(double value) noexcept : DimensionlessScalarQuantity(value) {}

};

} // namespace PhQ