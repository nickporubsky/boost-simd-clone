//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_HMSB_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_HMSB_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-reduction

    Returns a size_t value composed by the highiest bits.
    of each vector element

    @par Semantic:

    For every parameter of type T0

    @code
    size_t r = hmsb(a0);
    @endcode

    is similar to:

    @code
      size_t r = 0;
      for(result_type i = 0; i != cardinal_of<T0>; ++i)
      {
        r |= (bits(a0[i]) >> (sizeof(stype)*8 - 1)) << i;
      }
    @endcode


    @return a size_t value

**/
  template<typename T> auto hmsb(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-reduction

      Function object tied to simd::hmsb

      @see simd::hmsb
    **/
    const boost::dispatch::functor<tag::hmsb_> hmsb = {};
  }
} }
#endif

#include <boost/simd/function/definition/hmsb.hpp>
#include <boost/simd/arch/common/scalar/function/hmsb.hpp>
//#include <boost/simd/arch/common/function/simd/hmsb.hpp>

#endif