> ## Table of Content:
>  * [Initializer List](#initializer-list)
>  * [Defalut Constructor](#default-constructor)
>  * [Parametrized Constructor](#parametrized-constructor)

# **<span style="color: orange">Constructors</span>**
* A special member function whose task is to initialize the objects of its class.
* Its name is same as the class name.
* The constructor is invoked whenever an object of its associated class is created. [Example1](eg1.cpp)   [Example2](eg2.cpp)

## <span style="color: skyblue">Initializer List</span>
  * In the above Example2, the constructor initializes the count member to 0, like this
    ```cpp 
        Counter(){ 
            count = 0;
        }
    ```
  * Another way to initialize the data members is : 
    ```cpp
        Counter(): count(0){}
    ```
  * In case of multiple member initializations, they must be _separated by commas_. The result is the initializer list (sometimes called by other names, such as the __member-initialization list__).
    ```cpp
        someClass(): m1(7), m2(10), m3(11){
            // rest code
        }
    ```
  
## <span style="color: skyblue">Default Constructor</span>
  * Constructor with no arguments is called a _Default Constructor_. 
  
  * If compilers declares the '_default constructor_', then it is said to be '__implicitly declared default constructor__‘, otherwise it is said to be a “__explicitly declared default constructor” or “user define no argument constructor__”. 
  
  * By default, compiler invokes a default constructor if there is no user defined default constructor. In this case, _data members of the class are initialized with a garbage value_.
  ```cpp
    class ABC{
        int a;
        public:
            int getA(){
                return a;
            }
    };
    int main(){
        ABC object;
        object.getA();
        return 0;
    }
  ```
  * __Constructor does not have any return type__. If return type is void, it means function is not returning anything but if there is no return type, it means there is no mechanism to return anything.


## <span style="color: skyblue">Parametrized Constructor</span>
 * Constructors that can take arguments are called parameterized constructors.
 * Using this Constructor you can provide different values to data members of different
    objects, by passing the appropriate values as argument.
 * The constructor sample can be modified to take arguments as shown
    ```cpp
        class Sample{
            int m,n;
            public:
                // parametrized constructor
                Sample(int x, int y){
                    m = x;
                    n = y;
                }
        };
    ```
 * __Parameter passing for parameterized constructor__
   * We pass the initial values as arguments to the constructor function when an object is declared.
   * __NOTE:__ If parametrized constructors are defined, then one must have to define default constructor also. In this case the compiler will not provide any free default constructor.
    ```cpp
        Sample s1(20, 30); // implicit call

        Sample s2 = Sample(20, 30); // explicit call

        Sample s3 = {10,20}; // implicit call

        Sample s4; // it will give erro. If parameterised constructors are defined then default constructor must be defined.
    ```
## <span style="color: skyblue">Default Copy Constructor</span>
  * A copy constructor is used to declare and initialize an object from another object.
  * It’s a one argument constructor whose argument is an __reference__ to object of the same class as the constructor
  * Ex. 
    ```cpp
        // Defines the object s3 and at the same time initializes it to the values of object s2
        Sample s1(s2);
    ```
  * Another form of the statement is
    ```cpp
        Sample s1 = s2;
    ```
  * [See Example on Default Copy Constructor](DCC1.cpp)