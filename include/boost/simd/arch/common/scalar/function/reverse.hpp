//==================================================================================================
/*!
  @file

  @copyright 2015 NumScale SAS
  @copyright 2015 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_REVERSE_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_REVERSE_HPP_INCLUDED

#include <boost/config.hpp>
#include <boost/dispatch/function/overload.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bd = boost::dispatch;
 BOOST_DISPATCH_OVERLOAD ( reverse_
                         , (typename A0)
                         , bd::cpu_
                         , bd::scalar_< bd::unspecified_<A0> >
                         )
 {
   BOOST_FORCEINLINE A0 operator() ( A0 const& a0) const BOOST_NOEXCEPT
   {
     return a0;
   }
 };
} } }


#endif
