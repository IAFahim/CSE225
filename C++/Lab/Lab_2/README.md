**Task1:** 

In the driver file (main.cpp), perform the following sub-tasks.
1. Create two objects of this class, one with no constructor argument and one with the argument 5.
2. Take five input values from the user and store them in the array inside the second object using the set method.
3. For the second object, print all the values you just stored.
   Note that, you cannot assign anything in the first object since the array inside it has size 0. Neither can you change
   the size of this array to some other size.

![Lab 2 Task 1.cpp](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab_2/Task_1/Task_1.png)

**Task2:** 

Modify the header and the source files. Add a member function **void allocate(int s)** which allows
you to change the size of the array. Make sure that memory is not leaked.

![Lab 2 Task 2.cpp](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab_2/Task_1/Task_2.png)

**Task3:**

Modify  the  header  file  and  the  source  files  again,  so  that  it  works  for  two  dimensional  array  where  all  the
rows  are  the  same  size.  The  user  will  specify  the  number  of  rows  and  columns  as  well  as  the  content  of  the  array,
which you will take as input from user in the main function.

![Lab 2 Task 3.cpp](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab_2/Task_1/Task_3.png)

## Task 1 2 3 Header file 
`#include "dynarr.h"`

![Lab 2 Task 1 2 3 header file](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab%202/dynarr.h%20.png)

## Task 1 2 3 Cpp file
`dynarr.cpp`

![Lab 2 Task 1 2 3 header file](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab%202/dynarr.cpp%20.png)
