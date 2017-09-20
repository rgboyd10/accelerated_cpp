/*

Q - We noted in 4.2.3/65 that it is essential that the argument types in a call to max match exactly.  Will the following code work? If there is a problem, how would you fix it? 

int maxlen;
Student_info s;
max(s.name.size(), maxlen);

A - No, it won't work because the max function from the header <algorithm> must have two arguments of the same type.  I would rewrite it as seen below.

int maxlen;
string::size_type maxlen = 0;
Student_info s;
max(s.name.size(), maxlen);
*/
