//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_SQR_ABS_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SQR_ABS_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-arithmetic

    Computes sqr_abs value of its parameter.

  **/
  template<typename T> auto sqr_abs(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::sqr_abs

      @see simd::sqr_abs
    **/
    const boost::dispatch::functor<tag::sqr_abs_> sqr_abs = {};
  }
} }
#endif

#include <boost/simd/function/definition/sqr_abs.hpp>
#include <boost/simd/arch/common/generic/function/sqr_abs.hpp>
//#include <boost/simd/arch/common/function/simd/sqr_abs.hpp>

#endif
