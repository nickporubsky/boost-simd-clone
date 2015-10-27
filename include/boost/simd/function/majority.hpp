//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_MAJORITY_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_MAJORITY_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-predicates

    Returns True if at least two inputs are not zero else False.

    @par Semantic:

    @code
    logical<T> r = majority(a0,a1,a2);
    @endcode

    is similar to:

    @code
    logical<T> r = (a0!= 0)+(a1!= 0)+(a2!= 0) >= 2;
    @endcode




    @return a logical value

**/
  template<typename T> auto majority(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-predicates

      Function object tied to simd::majority

      @see simd::majority
    **/
    const boost::dispatch::functor<tag::majority_> majority = {};
  }
} }
#endif

#include <boost/simd/function/definition/majority.hpp>
#include <boost/simd/arch/common/scalar/function/majority.hpp>
//#include <boost/simd/arch/common/function/simd/majority.hpp>

#endif