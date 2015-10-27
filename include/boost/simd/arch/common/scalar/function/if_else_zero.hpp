//==================================================================================================
/*!
  @file

  @copyright 2015 NumScale SAS
  @copyright 2015 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_IF_ELSE_ZERO_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_IF_ELSE_ZERO_HPP_INCLUDED

#include <boost/config.hpp>
#include <boost/dispatch/function/overload.hpp>
#include <boost/simd/function/scalar/is_nez.hpp>
#include <boost/simd/constant/zero.hpp>

namespace boost { namespace simd { namespace ext
{

  BOOST_DISPATCH_OVERLOAD ( if_else_zero_
                          , (typename A0, typename A1)
                          , bd::cpu_
                          , bd::scalar_< logical_<A0> >
                          , bd::scalar_< bd::unspecified_<A1> >
                          )
  {
    BOOST_FORCEINLINE A1 operator() ( A0 a0, A1 const& a1) const BOOST_NOEXCEPT
    {
      return is_nez(a0) ? a1 : Zero<A1>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( if_else_zero_
                          , (typename A0, typename A1)
                          , bd::cpu_
                          , bd::scalar_< bd::unspecified_<A0> >
                          , bd::scalar_< bd::unspecified_<A1> >
                          )
  {
    using result_t = A1;
    BOOST_FORCEINLINE result_t operator() ( A0 const& a0, A1 const& a1) const BOOST_NOEXCEPT
    {
      return is_nez(a0) ? a1 : Zero<result_t>();
    }
  };
} } }


#endif