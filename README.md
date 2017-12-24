# About

Portable sample app using CMake and CPack.

The app uses two dynamic libraries, one of them using yet another library:

```
PortableApp
  libLibOne.dylib
  libLibTwo.dylib
    libLibThree.dylib
```

Tags: CMake, CPack, MacOS X bundle, .dmg, portable app.  

# Building

```
mkdir build
cd build
cmake ..
cpack -G DragNDrop
```

# Contacts
You are welcome to contact me at **ivan.onyshchenko (at) gmail.com** in case you have any questions, comments, suggestions or need help building, designing or implementing your product.