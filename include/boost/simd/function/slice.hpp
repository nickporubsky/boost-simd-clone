//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_SLICE_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SLICE_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-swar

    Computes slice value of its parameter.

  **/
  template<typename T> auto slice(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-swar

      Function object tied to simd::slice

      @see simd::slice
    **/
    const boost::dispatch::functor<tag::slice_> slice = {};
  }
} }
#endif

#include <boost/simd/function/definition/slice.hpp>
#include <boost/simd/arch/common/scalar/function/slice.hpp>
//#include <boost/simd/arch/common/function/simd/slice.hpp>

#endif
