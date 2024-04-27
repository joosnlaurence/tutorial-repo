#include "A.h"

// Static data members must be initialized outside of the definition of the class
int A::numObjs = 0;

// In the class definition, fi is not considered an inline function because it is not 
// implemented. However, in this implementation file, it is considered an inline function 
// because of the inline signature here. 
inline int A::fi() const{
    return 0;
}