///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's Math Trigonometry Library
// Copyright (C) 2017-2019 Michael Heilmann
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the
// use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "primordialmachine/math/trigonometry/include.hpp"
#include "gtest/gtest.h"

namespace primordialmachine {

TEST(trigonometry_tests, binary_slash_angle_scalar_tests)
{
  using degrees = angle<angle_unit_degrees, float>;
  ASSERT_TRUE(degrees(3.f) == degrees(9.f) / 3.f);
  using radians = angle<angle_unit_radians, float>;
  ASSERT_TRUE(radians(3.f) == radians(9.f) / 3.f);
  using turns = angle<angle_unit_turns, float>;
  ASSERT_TRUE(turns(3.f) == turns(9.f) / 3.f);
}

} // namespace primordialmachine
