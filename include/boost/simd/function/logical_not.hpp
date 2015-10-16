//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_LOGICAL_NOT_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_LOGICAL_NOT_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-arithmetic

    Computes logical_not value of its parameter.

  **/
  template<typename T> auto logical_not(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::logical_not

      @see simd::logical_not
    **/
    const boost::dispatch::functor<tag::logical_not_> logical_not = {};
  }
} }
#endif

#include <boost/simd/function/definition/logical_not.hpp>
#include <boost/simd/arch/common/scalar/function/logical_not.hpp>
//#include <boost/simd/arch/common/function/simd/logical_not.hpp>

#endif
