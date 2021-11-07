**Task1:** 

In the driver file (main.cpp), perform the following sub-tasks.
1. Create two objects of this class, one with no constructor argument and one with the argument 5.
2. Take five input values from the user and store them in the array inside the second object using the set method.
3. For the second object, PRINT all the values you just stored.
   Note that, you cannot assign anything in the first object since the array inside it has SIZE 0. Neither can you change
   the SIZE of this array to some other SIZE.

![Lab 2 Task 1.cpp](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab_2/Task_1/main.png)

**Task2:** 

Modify the header and the source files. Add a member function **void allocate(int s)** which allows
you to change the SIZE of the array. Make sure that memory is not leaked.

![Lab 2 Task 2.cpp](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab_2/Task_2/main.png)

**Task3:**

Modify  the  header  file  and  the  source  files  again,  so  that  it  works  for  two  dimensional  array  where  all  the
rows  are  the  same  SIZE.  The  user  will  specify  the  number  of  rows  and  columns  as  well  as  the  content  of  the  array,
which you will take as input from user in the main function.

![Lab 2 Task 3.cpp](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab_2/Task_3/main.png)

## Task 1 2 3 Header file 
`#include "dynarr.h"`

![Lab 2 Task 1 2 3 header file](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab_2/dynarr.h.png)

## Task 1 2 3 Cpp file
`dynarr.cpp`

![Lab 2 Task 1 2 3 header file](https://github.com/IAFahim/CSE225/blob/master/C%2B%2B/Lab/Lab_2/dynarr.cpp.png)
