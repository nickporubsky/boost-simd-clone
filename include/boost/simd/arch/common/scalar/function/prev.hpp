//==================================================================================================
/*!
  @file

  @copyright 2015 NumScale SAS
  @copyright 2015 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_PREV_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_PREV_HPP_INCLUDED

#include <boost/config.hpp>
#include <boost/dispatch/function/overload.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/function/scalar/dec.hpp>
#include <boost/simd/function/scalar/nextafter.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  BOOST_DISPATCH_OVERLOAD ( prev_
                          , (typename A0)
                          , bd::cpu_
                          , bd::scalar_< bd::arithmetic_<A0> >
                          )
  {
    using result_type = A0;
    BOOST_FORCEINLINE result_type operator() ( A0 a0) const BOOST_NOEXCEPT
    {
      return dec(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( prev_
                          , (typename A0)
                          , bd::cpu_
                          , bd::scalar_< bd::floating_<A0> >
                          )
  {
    using result_type = A0;
    BOOST_FORCEINLINE result_type operator() ( A0 a0) const BOOST_NOEXCEPT
    {
      return nextafter(a0, Minf<A0>());
    }
  };
} } }


#endif
