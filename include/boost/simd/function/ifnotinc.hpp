//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IFNOTINC_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IFNOTINC_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-boolean

    Computes ifnotinc value of its parameter.

  **/
  template<typename T> auto ifnotinc(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-boolean

      Function object tied to simd::ifnotinc

      @see simd::ifnotinc
    **/
    const boost::dispatch::functor<tag::ifnotinc_> ifnotinc = {};
  }
} }
#endif

#include <boost/simd/function/definition/ifnotinc.hpp>
#include <boost/simd/arch/common/scalar/function/ifnotinc.hpp>
//#include <boost/simd/arch/common/function/simd/ifnotinc.hpp>

#endif
