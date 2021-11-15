# CppSandbox

Some projects using C++ and CMake.

## List of projects

* **01_hello :** Hello world project. Prints a nice message.
* **02_hello-library :** Hello world project using a library. Prints a nice message from library.
* **03_map-example :** Example using std::map
* **04_pointers-example :** Example using pointers.
* **05_encapsulation :** Example about encapsulation. How to access get and set data from an object.
* **06_smart-pointer:** Example using smart-pointer. In this example a Vehicle Class and a Controller Class is used to create smart pointers.
* **07_shared-smart-pointer:** Example using shared pointer. In this example a Vehicle Class and a Controller Class is used to create smart shared pointers.
* **08_pass-by-reference:** Example passing one class to another class by reference. Vehicle Class is passed by reference to Controller Class.
* **09_functional:** Example using standard functional library.
* **10_template:** Example using template within a class.

## How to use ?

1. Clone repository (using SSH)
```
git clone git@github.com:JuliusDiestra/CppSandbox.git
```

2. (OPTIONAL) Create a local branch to play around and keep your master branch clean.
```
git checkout -b <local-branch-name>
```

3. Run bash script to build.
Each example contains a **build-code.sh** file build the project using cmake.
```
cd <example-directory>
bash build-code.sh
```
In case you prefer not to use it. You can do this,
```
cd <example-directory>
rm -rf build
mkdir build
cd build
cmake ..
make
./<project-name-in-cmake-file>
```

