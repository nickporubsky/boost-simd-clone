//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_COMPARE_LESS_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_COMPARE_LESS_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-reduction

    Returns a logical scalar that is the result of the lexicographic
    test for < on all elements of the entries

    It is probably not what you wish. Have a look to is_less

    @par Semantic:

    For every parameters of type T0:

    @code
    as_logical_t<scalar_of_t<T0>> r = compare_less(a0,a1);
    @endcode

    is similar to:

    @code
     as_logical_t<scalar_of_t<T0>> r = False;
      for(std::size_t i=0;i<cardinal_of<A0>;++i)
      {
        if (a0[i] <  a1[i])  {r =  True; break;}
        if (a1[i] <  a0[i])  {r = False; break;}
      }
    @endcode

    @see is_less
    @par Alias:
    @c compare_lt



    @return a value of the scalar logical type associated to the parameters

**/
  template<typename T> auto compare_less(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-reduction

      Function object tied to simd::compare_less

      @see simd::compare_less
    **/
    const boost::dispatch::functor<tag::compare_less_> compare_less = {};
  }
} }
#endif

#include <boost/simd/function/definition/compare_less.hpp>
#include <boost/simd/arch/common/scalar/function/compare_less.hpp>
//#include <boost/simd/arch/common/function/simd/compare_less.hpp>

#endif