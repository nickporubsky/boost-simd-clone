//==================================================================================================
/*!
  @file

  @copyright 2015 NumScale SAS
  @copyright 2015 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_IS_UNORD_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_IS_UNORD_HPP_INCLUDED

#include <boost/config.hpp>
#include <boost/dispatch/function/overload.hpp>
#include <boost/simd/function/scalar/is_nan.hpp>
#include <boost/simd/logical.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  BOOST_DISPATCH_OVERLOAD ( is_unord_
                          , (typename A0)
                          , bd::cpu_
                          , bd::scalar_< bd::bool_<A0> >
                          , bd::scalar_< bd::bool_<A0> >
                          )
  {
    BOOST_FORCEINLINE bool operator() ( A0 , A0 ) const BOOST_NOEXCEPT
    {
      return false;
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_unord_
                          , (typename A0)
                          , bd::cpu_
                          , bd::scalar_< bd::arithmetic_<A0> >
                          , bd::scalar_< bd::arithmetic_<A0> >
                          )
  {
    BOOST_FORCEINLINE logical<A0> operator() ( A0 , A0 ) const BOOST_NOEXCEPT
    {
      return false; //boost::simd::True<result_type>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_unord_
                          , (typename A0)
                          , bd::cpu_
                          , bd::scalar_< bd::floating_<A0> >
                          , bd::scalar_< bd::floating_<A0> >
                          )
  {
    BOOST_FORCEINLINE logical<A0> operator() ( A0 a0, A0 a1) const BOOST_NOEXCEPT
    {
      return simd::is_nan(a0) || simd::is_nan(a1);
    }
  };
} } }


#endif
