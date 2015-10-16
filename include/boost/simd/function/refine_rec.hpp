//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_REFINE_REC_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_REFINE_REC_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-arithmetic

    Computes refine_rec value of its parameter.

  **/
  template<typename T> auto refine_rec(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::refine_rec

      @see simd::refine_rec
    **/
    const boost::dispatch::functor<tag::refine_rec_> refine_rec = {};
  }
} }
#endif

#include <boost/simd/function/definition/refine_rec.hpp>
#include <boost/simd/arch/common/scalar/function/refine_rec.hpp>
//#include <boost/simd/arch/common/function/simd/refine_rec.hpp>

#endif
