//==================================================================================================
/*!
  @file

  @copyright 2015 NumScale SAS
  @copyright 2015 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_IS_NAN_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_IS_NAN_HPP_INCLUDED

#include <boost/simd/logical.hpp>
#include <boost/dispatch/function/overload.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  BOOST_DISPATCH_OVERLOAD ( is_nan_
                          , (typename A0)
                          , bd::cpu_
                          , bd::scalar_< bd::bool_<A0> >
                          )
  {
    BOOST_FORCEINLINE bool operator()( const A0&) const BOOST_NOEXCEPT
    {
      return false;
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_nan_
                          , (typename A0)
                          , bd::cpu_
                          , bd::scalar_< bd::fundamental_<A0> >
                          )
  {
    BOOST_FORCEINLINE logical<A0> operator()( const A0&) const BOOST_NOEXCEPT
    {
      return false;  //boost::simd::False<logical<A0>>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_nan_
                          , (typename A0)
                          , bd::cpu_
                          , bd::scalar_< bd::floating_<A0> >
                          )
  {
    BOOST_FORCEINLINE logical<A0> operator() ( A0 a0) const BOOST_NOEXCEPT
    {
      return  (a0 != a0);
    }
  };
} } }


#endif
