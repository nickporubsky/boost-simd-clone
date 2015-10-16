//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_CUMMAX_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_CUMMAX_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-swar

    Computes cummax value of its parameter.

  **/
  template<typename T> auto cummax(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-swar

      Function object tied to simd::cummax

      @see simd::cummax
    **/
    const boost::dispatch::functor<tag::cummax_> cummax = {};
  }
} }
#endif

#include <boost/simd/function/definition/cummax.hpp>
#include <boost/simd/arch/common/scalar/function/cummax.hpp>
//#include <boost/simd/arch/common/function/simd/cummax.hpp>

#endif
