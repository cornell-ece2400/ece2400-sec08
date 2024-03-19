//========================================================================
// SListInt.cc
//========================================================================
// Implementation for SListInt

#include "SListInt.h"
#include <cstdio>

//------------------------------------------------------------------------
// SListInt Default Constructor
//------------------------------------------------------------------------

SListInt::SListInt()
{
  m_head_p = nullptr;
}

//------------------------------------------------------------------------
// SListInt Destructor
//------------------------------------------------------------------------

SListInt::~SListInt()
{
  while ( m_head_p != nullptr ) {
    Node* temp_p = m_head_p->next_p;

    //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''
    // Delete the node
    //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''


    m_head_p = temp_p;
  }
}

//------------------------------------------------------------------------
// SListInt Copy Constructor
//------------------------------------------------------------------------

SListInt::SListInt( const SListInt& lst )
{
  // We must make sure head pointer is initialized correctly, otherwise
  // push_front will not work correctly.

  m_head_p = nullptr;

  // Iterate through each element of the given lst and use push_front to
  // add it to this list.

  Node* curr_p = lst.m_head_p;
  while ( curr_p != nullptr ) {
    push_front( curr_p->value );
    curr_p = curr_p->next_p;
  }

  // We now have all elements in this list, but they are in the reverse
  // order, so we can call reverse to ensure that this list is an exact
  // copy of the given list.

  reverse_v1();
}

//------------------------------------------------------------------------
// SListInt Swap
//------------------------------------------------------------------------

void SListInt::swap( SListInt& lst )
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement swap
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

}

//------------------------------------------------------------------------
// SListInt Overloaded Assignment Operator
//------------------------------------------------------------------------

SListInt& SListInt::operator=( const SListInt& lst )
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement operator=
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

  SListInt tmp( lst ); // create temporary copy of given list
  swap( tmp );         // swap this list with temporary list
  return *this;        // destructor called for temporary list
}

//------------------------------------------------------------------------
// SListInt::push_front
//------------------------------------------------------------------------

void SListInt::push_front( int v )
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement push_front
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

}

//------------------------------------------------------------------------
// SListInt::size
//------------------------------------------------------------------------

int SListInt::size() const
{
  int n = 0;

  Node* curr_p = m_head_p;
  while ( curr_p != nullptr ) {
    n++;
    curr_p = curr_p->next_p;
  }

  return n;
}

//------------------------------------------------------------------------
// SListInt::at
//------------------------------------------------------------------------

int SListInt::at( int idx ) const
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement at
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

}

//------------------------------------------------------------------------
// SListInt::at
//------------------------------------------------------------------------

int& SListInt::at( int idx )
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement at
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

}

//------------------------------------------------------------------------
// SListInt::reverse_v1
//------------------------------------------------------------------------
// Pseudocode for this algorithm:
//
//  def reverse( x, n ):
//    for i in 0 to n/2:
//      lo = i
//      hi = (n-1) - i
//      swap( x[lo], x[hi] )
//

void SListInt::reverse_v1()
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement reverse_v1
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

}

//------------------------------------------------------------------------
// SListInt::reverse_v2
//------------------------------------------------------------------------
// Steps for this algorithm:
//
//  1. Create temporary singly linked list
//  2. Push front all values from this list onto temporary list
//  3. Swap this list with the temporary list
//

void SListInt::reverse_v2()
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement reverse_v2
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

}

//------------------------------------------------------------------------
// SListInt::print
//------------------------------------------------------------------------

void SListInt::print() const
{
  Node* curr_p = m_head_p;
  while ( curr_p != nullptr ) {
    std::printf( "%d ", curr_p->value );
    curr_p = curr_p->next_p;
  }
  std::printf( "\n" );
}

