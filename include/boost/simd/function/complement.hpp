//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_COMPLEMENT_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_COMPLEMENT_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-arithmetic

    Computes complement value of its parameter.

  **/
  template<typename T> auto complement(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::complement

      @see simd::complement
    **/
    const boost::dispatch::functor<tag::complement_> complement = {};
  }
} }
#endif

#include <boost/simd/function/definition/complement.hpp>
#include <boost/simd/arch/common/scalar/function/complement.hpp>
//#include <boost/simd/arch/common/function/simd/complement.hpp>

#endif
